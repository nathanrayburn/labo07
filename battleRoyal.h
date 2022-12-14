//
// Created by natha on 14/12/2022.
//

#ifndef PRG1_BATTLEROYAL_H
#define PRG1_BATTLEROYAL_H

#include "terrain.h"
#include "robot.h"

class battleRoyal {
public:
    // constructors
     explicit battleRoyal(terrain t);

    // methods
    bool startGame(unsigned numberOfRobots);
private:
    // attributes
    terrain _t;
    vector<robot> _robots;

    // methods
    void messageLog();
    void displayGame();
    void placeRobotsInGame();
    void createNumberOfRobots(unsigned numberOfRobots);
};


#endif //PRG1_BATTLEROYAL_H
