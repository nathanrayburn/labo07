/*
  -------------------------------------------------------------------------------------------------------------------
  Fichier     : Terrain.h
  Nom du labo : Labo 07 - Robots
  Auteur(s)   : Rayburn Nathan, Besia Flavien
  Date        : 13.12.2022
  But         :

  Remarque(s) : RAS

  Compilateur : Mingw-w64 g++ 12.2.0
  -------------------------------------------------------------------------------------------------------------------
*/

#ifndef PRG1_TERRAIN_H
#define PRG1_TERRAIN_H

#include "Robot.h"

class Terrain {
public:
    // constructors
    Terrain();

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
