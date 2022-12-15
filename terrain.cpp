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

#include "terrain.h"

Terrain::Terrain() {
    _width = 10;
    _height = 10;
}
Terrain::Terrain(unsigned int length, unsigned int height) {
    _width = length;
    _height = height;
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
