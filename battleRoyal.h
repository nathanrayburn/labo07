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

#ifndef PRG1_BATTLEROYAL_H
#define PRG1_BATTLEROYAL_H

#include "terrain.h"
#include "robot.h"
#include "annex.h"
#include <string>
#include <vector>

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
    int isPositionExisting(const robot& bot);
    static void messageLog(const string& msg);
    void displayGame() const;
    void placeRobotsInGame();
    void createNumberOfRobots(unsigned numberOfRobots);
    void killRobot(const unsigned id, const unsigned idToKill);
    void moveRobots();
};


#endif //PRG1_BATTLEROYAL_H
