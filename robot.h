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
#ifndef PRG1_ROBOT_H
#define PRG1_ROBOT_H

#include <vector>
#include "terrain.h"
enum class Directions{
    UP,
    DOWN,
    RIGHT,
    LEFT
};

class robot{
public :

    // constructors
    robot(const unsigned id);
    robot(unsigned id, unsigned x, unsigned y);

    // accessors

    // getter
    unsigned getPositionX() const;
    unsigned getPositionY() const;
    unsigned getID() const;
    bool getLife() const;

    // setter
    void setPositionX(const unsigned x);
    void setPositionY(const unsigned y);
    void setLife(const bool isAlive);
    //methods
    //void move(const terrain& t);


private :

    unsigned _x;
    unsigned _y;
    unsigned _id;
    bool _isAlive;

    //accessors

    //setter
    void setPosition(unsigned x, unsigned y);

    //methods
    std::vector<Directions> filterDirections();

};


#endif //PRG1_ROBOT_H
