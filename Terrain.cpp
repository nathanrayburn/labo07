/*
  -------------------------------------------------------------------------------------------------------------------
  Fichier     : Terrain.cpp
  Nom du labo : Labo 07 - Robots
  Auteur(s)   : Rayburn Nathan, Besia Flavien
  Date        : 13.12.2022
  But         :

  Remarque(s) : RAS

  Compilateur : Mingw-w64 g++ 12.2.0
  -------------------------------------------------------------------------------------------------------------------
*/

#include "Terrain.h"

Terrain::Terrain() {
    _width = 10;
    _height = 10;
}
unsigned Terrain::getWidth() const {
    return _width;
}
unsigned Terrain::getHeight() const {
    return _height;
}

void Terrain::setWidth(unsigned int width) {
    _width = width;
}

void Terrain::setHeight(unsigned int height) {
    _height = height;
}
