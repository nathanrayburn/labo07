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

#include "battleRoyal.h"
#include <iostream>
#include <algorithm>
#include <thread>

using namespace  std;
battleRoyal::battleRoyal(unsigned terrainWidth, unsigned terrainHeight) {
    _t.setHeight(terrainHeight);
    _t.setWidth(terrainWidth);
}
bool battleRoyal::startGame(unsigned numberOfRobots) {

    if(!numberOfRobots) return false;

    createNumberOfRobots(numberOfRobots);

    placeRobotsInGame();

    _playersLeft = numberOfRobots;

    // regarder pour enlever le .size
    while(_robots.size() != 1 and _playersLeft != 1)
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
unsigned battleRoyal::getWinner() {

    for(Robot bot : _robots) {
        if(bot.getLife()) return bot.getID();
    }
    return -1;
}
void battleRoyal::placeRobotsInGame() {

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
void battleRoyal::killLog()  {
    cout << endl;
   for(const Robot& bot : _robots) {
        if(!bot.getLife()) {
            cout << bot.getRobotKilledBy() << " killed " << bot.getID() << endl;
        }
   }
}
// check maybe to directly cout robot by its position ?
void battleRoyal::displayGame() const {

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
void battleRoyal::createNumberOfRobots(const unsigned numberOfRobots) {
    for(unsigned i = 0; i< numberOfRobots; ++i)
    {
        Robot bot(i);
        this->_robots.push_back(bot);
    }
}
int battleRoyal::getBotWithSamePosition(const Robot& bot) {

    for(const Robot& r : _robots) {
        if(r.getID() != bot.getID() and r.getLife() and r.getPositionX() == bot.getPositionX() and r.getPositionY() == bot.getPositionY()) {
           return (int)r.getID();
        }
    }

    return -1;
}

void battleRoyal::moveRobots(){
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


void battleRoyal::killRobot(const unsigned id, const unsigned idToKill) {

    for(Robot& bot : _robots)
    {
        if(idToKill == bot.getID())
        {
            bot.setLife(false);
            bot.setRobotKilledBy(id);
            _playersLeft --;
            break;
        }
    }
}
