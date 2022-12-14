//
// Created by natha on 13/12/2022.
//

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
