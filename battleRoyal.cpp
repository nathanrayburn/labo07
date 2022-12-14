//
// Created by natha on 14/12/2022.
//

#include "battleRoyal.h"

battleRoyal::battleRoyal(terrain t) {
    this->_t = t;
}
bool battleRoyal::startGame(unsigned numberOfRobots) {

    if(!numberOfRobots) return false;
    createNumberOfRobots(numberOfRobots);
    placeRobotsInGame();

    return true;
}

void battleRoyal::placeRobotsInGame() {
    for(robot r : _robots)
    {

    }
}
void battleRoyal::messageLog() {

}
void battleRoyal::displayGame() {

}
void battleRoyal::createNumberOfRobots(const unsigned numberOfRobots) {
    for(unsigned i = 0; i< numberOfRobots; ++i)
    {
        robot bot(i);
        this->_robots.push_back(bot);
    }
}
void battleRoyal::killRobot() {

}