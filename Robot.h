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
#include "annex.h"


enum class Directions{
    UP,
    DOWN,
    RIGHT,
    LEFT
};

class Robot{
public :

    // constructors
    explicit Robot(unsigned id);
    Robot(unsigned id, unsigned x, unsigned y);

    // accessors

    // getter
    unsigned getPositionX() const;
    unsigned getPositionY() const;
    unsigned getID() const;
    bool getLife() const;

    // setter
    void setPositionX(unsigned x);
    void setPositionY(unsigned y);
    void setLife(bool isAlive);
    //methods
    void move(unsigned limitX, unsigned limitY);
    std::vector<Directions> getAvailableDirections(unsigned limitX, unsigned limitY) const;


private :

    unsigned _x;
    unsigned _y;
    unsigned _id;
    bool _isAlive;

};


#endif //PRG1_ROBOT_H
