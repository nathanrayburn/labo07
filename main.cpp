#include <iostream>
#include <vector>
#include "robot.h"
#include "userInterface.h"
#include "annex.h"
#include "terrain.h"
using namespace std;
vector<Robot> createNumberOfRobots(const unsigned numberOfRobots)
{
    vector<Robot> list;
    for(unsigned i = 0; i<= numberOfRobots; ++i)
    {
        Robot bot;
        list.push_back(bot);
    }
    return list;
}
int main() {

    string sLength  = "largeur     [10..1000] : ";
    string sHeight  = "hauteur     [10..1000] : ";
    string sNb      = "nbre object     [0..9] : ";

    unsigned width = userInput(10,1000,sLength);
    unsigned length = userInput(10,1000,sHeight);
    unsigned numberOfRobots = userInput(1,10,sNb);

    Terrain terrain;
    terrain.define(width,length);
    vector<Robot> listOfRobots = createNumberOfRobots(numberOfRobots);
    Robot test;

    return 0;
}

