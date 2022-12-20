/*
  -------------------------------------------------------------------------------------------------------------------
  Fichier     : BattleRoyal.h
  Nom du labo : Labo 07 - Robots
  Auteur(s)   : Rayburn Nathan, Besia Flavien
  Date        : 13.12.2022
  But         : This class is designed to manage the game.

  Remarque(s) : RAS

  Compilateur : Mingw-w64 g++ 12.2.0
  -------------------------------------------------------------------------------------------------------------------
*/

#ifndef PRG1_BATTLEROYAL_H
#define PRG1_BATTLEROYAL_H

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
    unsigned _terrainWidth;
    unsigned _terrainHeight;
    unsigned _playersLeft{};
    std::vector<Robot> _robots;


    // methods
    void killLog();

    void displayGame() const;

    void placeRobotsInGame();

    void createNumberOfRobots(unsigned numberOfRobots);

    void moveRobots();

    void getWinner();

    static bool isAlive(const Robot &bot);

    static bool compareTimeOfDeath(const Robot &firstRobot, const Robot &secondRobot);
};


#endif //PRG1_BATTLEROYAL_H
