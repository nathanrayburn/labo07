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

using namespace  std;
battleRoyal::battleRoyal(terrain t) {
    this->_t = t;
}
bool battleRoyal::startGame(unsigned numberOfRobots) {

    if(!numberOfRobots) return false;
    createNumberOfRobots(numberOfRobots);
    placeRobotsInGame();

    while(_robots.size() != 1)
    {
        //move robots & and check kill
        moveRobots();
        //display game

    }

    // display winner

    return true;
}

void battleRoyal::placeRobotsInGame() {
    for(robot& r : this->_robots)
    {
        r.setPositionX(createRandomValue((int)_t.getLength()));
        r.setPositionY(createRandomValue((int)_t.getHeight()));
    }
}
void battleRoyal::messageLog(const string& msg) {
    cout << msg;
}
void battleRoyal::displayGame() const {

}
void battleRoyal::createNumberOfRobots(const unsigned numberOfRobots) {
    for(unsigned i = 0; i< numberOfRobots; ++i)
    {
        robot bot(i);
        this->_robots.push_back(bot);
    }
}
int battleRoyal::isPositionExisting(const robot& bot) {

    for(const robot& r : _robots) {
        if(r.getID() != bot.getID()) {
            if(r.getPositionX() == bot.getPositionX() and r.getPositionY() == bot.getPositionY()) {
               return (int)r.getID();
            }
        }
    }

    return -1;
}
void battleRoyal::moveRobots(){
    for(robot& bot : _robots)
    {
       // bot.move(_t);
       int botToKill;
        botToKill = isPositionExisting(bot);
        if(botToKill != -1) {
            killRobot(bot.getID(),(unsigned)botToKill);
            break;
        }

    }
}
bool isSameID(const unsigned id, const unsigned idToKill) {
    return id == idToKill;
}

void battleRoyal::killRobot(const unsigned id, const unsigned idToKill) {

    string msg =  to_string(id) + "" + to_string(idToKill);
    messageLog(msg);
}
