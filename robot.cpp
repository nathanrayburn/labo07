//
// Created by natha on 13/12/2022.
//

#include "robot.h"
using namespace std;
robot::robot(const unsigned id) {
    _id = id;
    _x = 0;
    _y = 0;
}
robot::robot(unsigned id, unsigned x, unsigned y) {
    _id = id;
    _x = x;
    _y = y;
}
void robot::move(terrain& t)
{

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