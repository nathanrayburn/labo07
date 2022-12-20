/*
  -------------------------------------------------------------------------------------------------------------------
  Fichier     : userInterface.cpp
  Nom du labo : Labo 07 - Robots
  Auteur(s)   : Rayburn Nathan, Besia Flavien
  Date        : 13.12.2022

  Remarque(s) : RAS

  Compilateur : Mingw-w64 g++ 12.2.0
  -------------------------------------------------------------------------------------------------------------------
*/

#include <string>
#include <iostream>
#include <limits>
#include "userInterface.h"

using namespace std;

unsigned userInput(const unsigned min, const unsigned max, const string& inputMsg)
{
    unsigned userInput = 0;

    do {
        cout << inputMsg;

        cin >> userInput;
        if(!cin){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

    }while(userInput < min || userInput >  max || !cin);

    return userInput;
}