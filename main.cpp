/*
  -------------------------------------------------------------------------------------------------------------------
  Fichier     : main.cpp
  Nom du labo : Labo 07 - Robots
  Auteur(s)   : Rayburn Nathan, Besia Flavien
  Date        : 13.12.2022
  But         : Simulate robots in a given space. The user inputs the dimensions in (X, Y) coordinates et can choose
                a given amount of robots [1 - 10]

  Remarque(s) : RAS

  Compilateur : Mingw-w64 g++ 12.2.0
  -------------------------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include "userInterface.h"
#include "BattleRoyal.h"

using namespace std;

int main() {

    const int widthMin = 10,
            widthMax = 1000,
            heightMin = 10,
            heightMax = 1000,

            nbRobotMin = 1,
            nbRobotMax = 10;

    string sWidth = "largeur     [10..1000] : ";
    string sHeight = "hauteur     [10..1000] : ";
    string sNbRobot = "nbre object    [1..10] : ";

    unsigned numberOfColumns = userInput(widthMin, widthMax, sWidth);
    unsigned numberOfLines = userInput(heightMin, heightMax, sHeight);
    unsigned numberOfRobots = userInput(nbRobotMin, nbRobotMax, sNbRobot);
    
    BattleRoyal battle(numberOfLines, numberOfColumns);

    if (!battle.startGame(numberOfRobots)) {
        cout << "Impossible de lancer le jeu car il n'y a aucun joueur." << endl;
    }

    return EXIT_SUCCESS;
}

