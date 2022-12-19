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

#include "Terrain.h"
#include "Robot.h"
#include "annex.h"
#include <string>
#include <vector>

class BattleRoyal {
public:
    // constructors
     explicit BattleRoyal(unsigned terrainWidth, unsigned terrainHeight);

    // methods
    bool startGame(unsigned numberOfRobots);
private:
    // attributes
    Terrain _t;
    unsigned _playersLeft{};
    vector<Robot> _robots;


    // methods
    int getBotWithSamePosition(const Robot& bot);
    void killLog();
    void displayGame() const;
    void placeRobotsInGame();
    void createNumberOfRobots(unsigned numberOfRobots);
    void moveRobots();
    void killRobot(unsigned id, unsigned idToKill);
    unsigned getWinner();

};


#endif //PRG1_BATTLEROYAL_H
