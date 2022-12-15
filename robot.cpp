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
#include "robot.h"
using namespace std;
robot::robot(const unsigned id) {
    _id = id;
    _x = 0;
    _y = 0;
    _isAlive = true;
}
robot::robot(unsigned id, unsigned x, unsigned y) {
    _id = id;
    _x = x;
    _y = y;
    _isAlive = true;
}
/*void robot::move(const terrain& t)
{

} */
void robot::setLife(const bool isAlive) {
    _isAlive = isAlive;
}
bool robot::getLife() const {
    return _isAlive;
}
unsigned robot::getID() const {
    return _id;
}
unsigned robot::getPositionX() const {
    return _x;
}
unsigned robot::getPositionY() const {
    return _y;
}
void robot::setPositionY(const unsigned y) {
    _y = y;
}
void robot::setPositionX(const unsigned x) {
    _x = x;
};
vector<Directions> robot::filterDirections()
{
    vector<Directions> d = {};
    return d;
}
void robot::setPosition(unsigned x, unsigned y)
{
    _x = x;
    _y = y;
}