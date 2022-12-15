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
#include "Robot.h"
using namespace std;
Robot::Robot(const unsigned id) {
    _id = id;
    _x = 0;
    _y = 0;
    _isAlive = true;
}
Robot::Robot(unsigned id, unsigned x, unsigned y) {
    _id = id;
    _x = x;
    _y = y;
    _isAlive = true;
}
vector<Directions> Robot::getAvailableDirections(const unsigned limitX, const unsigned limitY) const {

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
void Robot::setLife(const bool isAlive) {
    _isAlive = isAlive;
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
};
vector<Directions> Robot::filterDirections()
{
    vector<Directions> d = {};
    return d;
}
void Robot::setPosition(unsigned x, unsigned y)
{
    _x = x;
    _y = y;
}