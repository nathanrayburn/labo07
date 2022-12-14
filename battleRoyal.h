//
// Created by natha on 14/12/2022.
//

#ifndef PRG1_BATTLEROYAL_H
#define PRG1_BATTLEROYAL_H

#include "terrain.h"
#include "robot.h"

class battleRoyal {
public:
    battleRoyal(terrain t, vector<robot> robots);
    bool startgame();
private:
    terrain t;
    vector<robot> robots;
};


#endif //PRG1_BATTLEROYAL_H
