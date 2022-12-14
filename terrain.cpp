//
// Created by natha on 13/12/2022.
//

#include "terrain.h"

terrain::terrain(unsigned int length, unsigned int height) {
    this->length = length;
    this->height = height;
}
unsigned terrain::getLength() const {
    return this->length;
}
unsigned terrain::getHeight() const {
    return this->height;
}
