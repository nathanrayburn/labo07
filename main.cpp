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
#include <iostream>
#include "userInterface.h"
#include "BattleRoyal.h"

using namespace std;


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



    BattleRoyal battle(width, height);

    if(battle.startGame(numberOfRobots)){

    }else {
        cout << "Couldn't start the game" << endl;
    }


    return 0;
}

