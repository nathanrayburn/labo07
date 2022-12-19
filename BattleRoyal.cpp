/*
  -------------------------------------------------------------------------------------------------------------------
  Fichier     :
  Nom du labo : Labo 07 - Robots
  Auteur(s)   : Rayburn Nathan
  Date        :
  But         :

  Remarque(s) : RAS

  Compilateur : Mingw-w64 g++ 12.2.0
  -------------------------------------------------------------------------------------------------------------------
*/

#include "BattleRoyal.h"
#include <iostream>
#include <algorithm>
#include <thread>

using namespace  std;
BattleRoyal::BattleRoyal(unsigned terrainWidth, unsigned terrainHeight) {
    _t.setHeight(terrainHeight);
    _t.setWidth(terrainWidth);
}
bool BattleRoyal::startGame(unsigned numberOfRobots) {

    if(!numberOfRobots) return false;

    createNumberOfRobots(numberOfRobots);

    placeRobotsInGame();

    _playersLeft = numberOfRobots;

    // regarder pour enlever le .size
    while(_robots.size() != 1)
    {
        system("cls");
        moveRobots();
        displayGame();
        killLog();
        std::this_thread::sleep_for(500ms);
    }

    // display winner
    cout << "le gagnant est " << getWinner();
    return true;
}
unsigned BattleRoyal::getWinner() {

    // Find the first robot that is still alive
    auto it = std::find_if(_robots.begin(), _robots.end(), [](const Robot& bot) { return bot.getLife(); });

    // If a robot was found, return its ID
    if (it != _robots.end()) {
        return it->getID();
    }
    // If no robot was found, return -1
    return -1;
}
void BattleRoyal::placeRobotsInGame() {

    for(Robot& r : this->_robots)
    {
        // Set positionIsTaken to true initially
        bool positionIsTaken = true;
        // Keep looping until a position is found that is not taken
        while (positionIsTaken) {
            // Assign random position to the current robot
            r.setPositionX(createRandomValue((int)_t.getWidth()));
            r.setPositionY(createRandomValue((int)_t.getHeight()));

            // Set positionIsTaken to false initially
            positionIsTaken = false;
            // Iterate through the list of all robots
            for (const Robot& other : _robots) {
                // If another robot has the same position as the current robot
                if (other.getID() != r.getID() && other.getPositionX() == r.getPositionX() && other.getPositionY() == r.getPositionY()) {
                    // Set positionIsTaken to true and exit the inner loop
                    positionIsTaken = true;
                    break;
                }
            }
        }
    }

}
bool compareTimeOfDeath(const Robot& firstRobot, const Robot& secondRobot) {
    return firstRobot.getTimeOfDeath() < secondRobot.getTimeOfDeath();
}
void BattleRoyal::killLog()  {

    vector<Robot> killedRobots;

    cout << endl;
    for(const Robot& bot : _robots) {
        if(!bot.getLife()) {
            killedRobots.push_back(bot);
        }
    }

    sort(killedRobots.begin(),killedRobots.end(),compareTimeOfDeath);
    for(Robot& killedRobot : _robots)
    {
       if(!killedRobot.getLife()) {
           cout << killedRobot.getRobotKilledBy() << " killed " << killedRobot.getID() << endl;
       }
    }

}

void BattleRoyal::displayGame() const {

    // Get the width and height of the terrain
    unsigned limitX = _t.getWidth()+1;
    unsigned limitY = _t.getHeight()+1;

    // Print the top row of underscores
    cout << "_";
    // Print underscores for each column of the terrain
    for (unsigned col = 0; col < limitY; col++) {
        cout << "_";
    }
    cout << endl;

    // Iterate over each row of the terrain
    for (unsigned row = 0; row < limitX; row++) {
        // Print the leftmost column with a pipe
        cout << "|";
        // Iterate over each column of the terrain
        for (unsigned col = 0; col < limitY; col++) {
            // Check if there is a robot at the current position
            bool foundRobot = false;
            for (const Robot& bot : _robots) {
                if (bot.getPositionX() == row && bot.getPositionY() == col and bot.getLife()) {
                    // Print the ID of the robot
                    cout << bot.getID();
                    foundRobot = true;
                    break;
                }
            }
            // If there is no robot at the current position, print a space
            if (!foundRobot) {
                cout << " ";
            }
        }
        // Print the rightmost column with a pipe
        cout << "|" << endl;
    }

    // Print the bottom row of underscores
    cout << "_";
    // Print underscores for each column of the terrain
    for (unsigned col = 0; col < limitY; col++) {
        cout << "_";
    }
}
void BattleRoyal::createNumberOfRobots(const unsigned numberOfRobots) {
    for(unsigned i = 0; i< numberOfRobots; ++i)
    {
        Robot bot(i);
        this->_robots.push_back(bot);
    }
}
int BattleRoyal::getBotWithSamePosition(const Robot& bot) {

    for(const Robot& r : _robots) {
        if(r.getID() != bot.getID() and r.getLife() and r.getPositionX() == bot.getPositionX() and r.getPositionY() == bot.getPositionY()) {
           return (int)r.getID();
        }
    }

    return -1;
}

void BattleRoyal::moveRobots(){
    for(Robot& bot : _robots)
    {
        // Check if the bot is still alive
       if(bot.getLife())
       {
           bot.move(_t.getWidth(),_t.getHeight());
           int botToKill;

           botToKill = getBotWithSamePosition(bot);

           if(botToKill != -1) {
               killRobot(bot.getID(),(unsigned)botToKill);
           }
       }
    }
}


void BattleRoyal::killRobot(const unsigned killerId, const unsigned killedId) {

    for(Robot& bot : _robots)
    {
        if(killedId == bot.getID())
        {
            bot.setLife(false);
            bot.setRobotKilledBy(killerId);
            bot.setTimeOfDeath(chrono::system_clock::now());
            _playersLeft --;
            break;
        }
    }
}
