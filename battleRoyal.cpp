//
// Created by natha on 14/12/2022.
//

#include "battleRoyal.h"

battleRoyal::battleRoyal(terrain t, vector<robot> robots) {
    this->t = t;
    this->robots = robots;
}
bool battleRoyal::startgame(){
    return true;
}