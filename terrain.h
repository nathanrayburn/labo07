//
// Created by natha on 13/12/2022.
//

#ifndef PRG1_TERRAIN_H
#define PRG1_TERRAIN_H

#include <vector>
#include "robot.h"
using namespace std;

class terrain {
public:
    terrain(unsigned length, unsigned height);
    unsigned getLength() const;
    unsigned getHeight() const;

private:
    unsigned length;
    unsigned height;

};


#endif //PRG1_TERRAIN_H
