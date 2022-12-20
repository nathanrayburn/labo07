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

    while(_playersLeft != 1)
    {
        system("cls");
        moveRobots();
        displayGame();
        killLog();
        this_thread::sleep_for(50ms);
    }

    // display winner
    cout << "le gagnant est " << getWinner();
    return true;
}
unsigned BattleRoyal::getWinner() {

    for(Robot& bot : _robots) {
        if(bot.getLife()) return bot.getID();
    }
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

    cout << endl;

    sort(_robots.begin(),_robots.end(),compareTimeOfDeath);

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
        Robot bot;
        this->_robots.push_back(bot);
    }
}

class RobotSamePosition {
public :
    explicit RobotSamePosition(const Robot& bot): _bot(bot){};
    bool operator()(const Robot& other);
private :
    const Robot& _bot;
};

bool RobotSamePosition::operator()(const Robot &other) {
    return _bot.getPositionX() == other.getPositionX() and _bot.getPositionY() == other.getPositionY()
    and _bot.getID() != other.getID() and other.getLife();
}

void BattleRoyal::moveRobots(){
    for(Robot& bot : _robots)
    {
       if(bot.getLife())
       {
           bot.move(_t.getWidth(),_t.getHeight());

           auto it = find_if(_robots.begin(),_robots.end(), RobotSamePosition(bot));
           if(it != _robots.end()) {

               Robot& botToKill = *it;
               botToKill.kill(bot.getID());
               _playersLeft--;
           }
       }
    }
}

