#include <iostream>
#include <vector>
#include "robot.h"
#include "userInterface.h"
#include "terrain.h"
#include "battleRoyal.h"

using namespace std;

vector<robot> createNumberOfRobots(const unsigned numberOfRobots)
{
    vector<robot> list;
    for(unsigned i = 0; i< numberOfRobots; ++i)
    {
        robot bot;
        list.push_back(bot);
    }
    return list;
}
int main() {

    const int widthMin   = 10,
              widthMax   = 1000,
              heightMin  = 10,
              heightMax  = 1000,

              nbRobotMin = 1,
              nbRobotMax = 10;

    string sWidth   = "largeur     [10..1000] : ";
    string sHeight  = "hauteur     [10..1000] : ";
    string sNbRobot = "nbre object     [1..10] : ";

    unsigned width = userInput(widthMin,widthMax,sWidth);
    unsigned height = userInput(heightMin,heightMax,sHeight);
    unsigned numberOfRobots = userInput(nbRobotMin,nbRobotMax,sNbRobot);

    vector<robot> listOfRobots = createNumberOfRobots(numberOfRobots);

    terrain terrain(width,height);
    battleRoyal battle(terrain,listOfRobots);
    if(battle.startgame()){

    }


    return 0;
}

