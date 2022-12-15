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
battleRoyal::battleRoyal(unsigned terrainWidth, unsigned terrainHeight) {
    _t.setHeight(terrainHeight);
    _t.setWidth(terrainWidth);
}
bool battleRoyal::startGame(unsigned numberOfRobots) {

    if(!numberOfRobots) return false;

    createNumberOfRobots(numberOfRobots);

    placeRobotsInGame();

    _playersLeft = numberOfRobots;


    while(_robots.size() != 1 and _playersLeft != 1)
    {
        //move robots & and check kill
        moveRobots();
        //display game
    }

    // display winner
    cout << "le gagnant est " << getWinner();
    return true;
}
unsigned battleRoyal::getWinner() {

    for(Robot bot : _robots) {
        if(bot.getLife()) return bot.getID();
    }
}
void battleRoyal::placeRobotsInGame() {
    for(Robot& r : this->_robots)
    {
        r.setPositionX(createRandomValue((int)_t.getWidth()));
        r.setPositionY(createRandomValue((int)_t.getHeight()));
    }
}
void battleRoyal::messageLog(const string& msg) {
    cout << msg << endl;
}
void battleRoyal::displayGame() const {

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
               break;
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
            _playersLeft --;
            break;
        }
    }

    string msg =  "Robot " + to_string(id) + " a tue robot " + to_string(idToKill);

    messageLog(msg);
}
