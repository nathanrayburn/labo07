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
#ifndef PRG1_TERRAIN_H
#define PRG1_TERRAIN_H

#include <vector>
#include "robot.h"
using namespace std;

class terrain {
public:
    terrain();
    terrain(unsigned length, unsigned height);
    unsigned getLength() const;
    unsigned getHeight() const;

private:
    unsigned _length;
    unsigned _height;

};


#endif //PRG1_TERRAIN_H
