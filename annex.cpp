/*
  -------------------------------------------------------------------------------------------------------------------
  Fichier     : annex.cpp
  Nom du labo : Labo 07 - Robots
  Auteur(s)   : Rayburn Nathan, Besia Flavien
  Date        : 13.12.2022

  Remarque(s) : RAS

  Compilateur : Mingw-w64 g++ 12.2.0
  -------------------------------------------------------------------------------------------------------------------
*/

#include "annex.h"
#include <iostream>
#include <random>

using namespace std;

unsigned createRandomValue(const unsigned valMax) {

    const int rangeFrom = 0;

    random_device rand_dev;
    default_random_engine generator(rand_dev());
    uniform_int_distribution<unsigned> distr(rangeFrom, valMax);

    return distr(generator);
}
