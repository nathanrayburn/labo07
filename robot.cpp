//
// Created by natha on 13/12/2022.
//

#include "robot.h"
using namespace std;
robot::robot() {

}
robot::robot(unsigned id, unsigned x, unsigned y) {
    this->id = id;
    this->x = x;
    this->y = y;
}
void robot::move(terrain& t)
{

}
unsigned robot::getID() const {
    return id;
}
unsigned robot::getPositionX() const {
    return x;
}
unsigned robot::getPositionY() const {
    return y;
}
vector<Directions> robot::filterDirections()
{
    vector<Directions> d = {};
    return d;
}
void robot::setPosition(unsigned x, unsigned y)
{
    this->x = x;
    this->y = y;
}