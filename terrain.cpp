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

terrain::terrain() {
    _length = 10;
    _height = 10;
}
terrain::terrain(unsigned int length, unsigned int height) {
    _length = length;
    _height = height;
}
unsigned terrain::getLength() const {
    return _length;
}
unsigned terrain::getHeight() const {
    return _height;
}
