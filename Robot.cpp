/*
  -------------------------------------------------------------------------------------------------------------------
  Fichier     : Robot.cpp
  Nom du labo : Labo 07 - Robots
  Auteur(s)   : Rayburn Nathan, Besia Flavien
  Date        : 13.12.2022
  But         :

  Remarque(s) : RAS

  Compilateur : Mingw-w64 g++ 12.2.0
  -------------------------------------------------------------------------------------------------------------------
*/

#include "Robot.h"

using namespace std;

unsigned Robot::_nextID = 0;

Robot::Robot() : _id(_nextID++) {}
vector<Directions> Robot::getAvailableDirections(const unsigned limitX, const unsigned limitY) const {
    // ameliorer les if ?
    vector<Directions> availableDirections = {};

    if(_x + 1 <= limitX) {
        availableDirections.push_back(Directions::RIGHT);
    }
    if((int)_x - 1 >= 0) {
        availableDirections.push_back(Directions::LEFT);
    }
    if((int)_y - 1 >= 0) {
        availableDirections.push_back(Directions::UP);
    }
    if(_y + 1 <= limitY) {
        availableDirections.push_back(Directions::DOWN);
    }
    return availableDirections;
}
void Robot::move(const unsigned limitX, const unsigned limitY)
{
    if(_isAlive) {
        vector<Directions> availableDirections = getAvailableDirections(limitX,limitY);

        Directions randomDirectionToMove = availableDirections.at(createRandomValue((int)availableDirections.size()-1));

        switch (randomDirectionToMove) {
            case Directions::UP:
                _y-- ;
                break;
            case Directions::DOWN:
                _y++ ;
                break;
            case Directions::RIGHT:
                _x++ ;
                break;
            case Directions::LEFT:
                _x-- ;
                break;
        }
    }
}
bool Robot::getLife() const {
    return _isAlive;
}
unsigned Robot::getID() const {
    return _id;
}
unsigned Robot::getPositionX() const {
    return _x;
}
unsigned Robot::getPositionY() const {
    return _y;
}
void Robot::setPositionY(const unsigned y) {
    _y = y;
}
void Robot::setPositionX(const unsigned x) {
    _x = x;
}
unsigned Robot::getRobotKilledBy() const {
    return _killedBy;
}
chrono::system_clock::time_point Robot::getTimeOfDeath() const {
    return _timeOfDeath;
}
Robot& Robot::operator=(const Robot& other) {
    if (this != &other) {  // self-assignment check
        _id = other._id;
        _x = other._x;
        _y = other._y;
        _isAlive = other._isAlive;
        _killedBy = other._killedBy;
        _timeOfDeath = other._timeOfDeath;
    }
    return *this;
}

void Robot::kill(const unsigned killerId) {
    _killedBy = killerId;
    _isAlive = false;
    _timeOfDeath = chrono::system_clock::now();
}
