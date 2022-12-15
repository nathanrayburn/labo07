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
#include "Robot.h"
using namespace std;

class Terrain {
public:
    // constructors
    Terrain();
    Terrain(unsigned getWidth, unsigned height);

    // accessors

    // getters
    unsigned getWidth() const;
    unsigned getHeight() const;

    // setters

    void setWidth(unsigned width);
    void setHeight(unsigned height);

private:
    unsigned _width;
    unsigned _height;

};


#endif //PRG1_TERRAIN_H
