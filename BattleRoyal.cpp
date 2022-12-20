/*
  -------------------------------------------------------------------------------------------------------------------
  Fichier     : BattleRoyal.cpp
  Nom du labo : Labo 07 - Robots
  Auteur(s)   : Rayburn Nathan, Besia Flavien
  Date        : 13.12.2022

  Remarque(s) : RAS

  Compilateur : Mingw-w64 g++ 12.2.0
  -------------------------------------------------------------------------------------------------------------------
*/

#include "BattleRoyal.h"
#include <iostream>
#include <algorithm>
#include <thread>

using namespace std;

/**
 * This class is used for a functor
 */
class RobotSamePosition {
public :
    explicit RobotSamePosition(const Robot &bot) : _bot(bot) {};

    bool operator()(const Robot &other);

private :
    const Robot &_bot;
};
/**
 * This function returns true when the bots have the same position and that they're both alive
 * @param other
 * @return bool
 */
bool RobotSamePosition::operator()(const Robot &other) {

    return _bot.getPositionX() == other.getPositionX() and _bot.getPositionY() == other.getPositionY()
           and _bot.getID() != other.getID() and other.getLife() and _bot.getLife();
}

BattleRoyal::BattleRoyal(unsigned terrainWidth, unsigned terrainHeight) {
    _terrainWidth = terrainWidth;
    _terrainHeight = terrainHeight;
}

bool BattleRoyal::startGame(unsigned numberOfRobots) {

    if (!numberOfRobots) return false;

    createNumberOfRobots(numberOfRobots);

    placeRobotsInGame();

    _playersLeft = numberOfRobots;

    while (_playersLeft != 1) {

        system("cls");
        moveRobots();
        displayGame();
        killLog();
        this_thread::sleep_for(500ms);
    }

    getWinner();

    return true;
}

bool BattleRoyal::isAlive(const Robot &bot) {
    return bot.getLife();
}

void BattleRoyal::getWinner() {
    auto it = find_if(_robots.begin(), _robots.end(), isAlive);
    if (it != _robots.end()) {
        Robot &bot = *it;
        cout << "Le gagnant est " << bot.getID() << endl;
    } else {
        cout << "Il n'y a pas de gagnant" << endl;
    }
}

void BattleRoyal::placeRobotsInGame() {

    for (Robot &r: this->_robots) {

        bool positionIsTaken = true;

        while (positionIsTaken) {

            r.setPositionX(createRandomValue(_terrainWidth));
            r.setPositionY(createRandomValue(_terrainHeight));

            positionIsTaken = false;

            for (const Robot &other: _robots) {
                // If another robot has the same position as the current robot
                if (other.getID() != r.getID() && other.getPositionX() == r.getPositionX() &&
                    other.getPositionY() == r.getPositionY()) {

                    positionIsTaken = true;
                    break;
                }
            }
        }
    }

}

bool BattleRoyal::compareTimeOfDeath(const Robot &firstRobot, const Robot &secondRobot) {
    return firstRobot.getTimeOfDeath() < secondRobot.getTimeOfDeath();
}

void BattleRoyal::killLog() {

    sort(_robots.begin(), _robots.end(), compareTimeOfDeath);

    for (Robot &killedRobot: _robots) {
        if (!killedRobot.getLife()) {
            cout << killedRobot.getRobotKilledBy() << " killed " << killedRobot.getID() << endl;
        }
    }
    cout << endl;
}

void BattleRoyal::displayGame() const {


    unsigned limitX = _terrainWidth + 1;
    unsigned limitY = _terrainHeight + 1;

    for (unsigned row = 0; row <= limitX; row++) {


        for (unsigned col = 0; col <= limitY; col++) {

            bool foundRobot = false;
            if (row == 0 or row == limitX) {
                cout << "-";
            } else if (col == 0 or col == limitY) {
                cout << "|";
            } else {

                for (const Robot &bot: _robots) {
                    if (bot.getPositionX() == row && bot.getPositionY() == col and bot.getLife()) {

                        cout << bot.getID();
                        foundRobot = true;
                        break;
                    }
                }

                if (!foundRobot) {
                    cout << " ";
                }
            }

        }

        cout << endl;
    }
}

void BattleRoyal::createNumberOfRobots(const unsigned numberOfRobots) {
    for (unsigned i = 0; i < numberOfRobots; ++i) {
        Robot bot;
        this->_robots.push_back(bot);
    }
}

void BattleRoyal::moveRobots() {
    for (Robot &bot: _robots) {

        bot.move(_terrainWidth, _terrainHeight);

        auto it = find_if(_robots.begin(), _robots.end(), RobotSamePosition(bot));
        if (it != _robots.end()) {
            Robot &botToKill = *it;
            botToKill.kill(bot.getID());

            // Instead of deleting a robot from the list, I'd rather keep them in the vector.
            // For potential future functionalities. Maybe we could revive a robot...?
            _playersLeft--;
        }
    }
}

