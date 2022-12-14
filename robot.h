//
// Created by natha on 13/12/2022.
//

#ifndef PRG1_ROBOT_H
#define PRG1_ROBOT_H

#include <vector>
#include "terrain.h"
enum class Directions{
    UP,
    DOWN,
    RIGHT,
    LEFT
};

class robot{
public :

    // constructors
    robot(const unsigned id);
    robot(unsigned id, unsigned x, unsigned y);

    // accessors

    // getter
    unsigned getPositionX() const;
    unsigned getPositionY() const;
    unsigned getID() const;

    // setter
    void setPositionX(const unsigned x);
    void setPositionY(const unsigned y);

    //methods
    void move(terrain& t);


private :

    unsigned _x;
    unsigned _y;
    unsigned _id;

    //accessors

    //setter
    void setPosition(unsigned x, unsigned y);

    //methods
    std::vector<Directions> filterDirections();

};


#endif //PRG1_ROBOT_H
