/*
  -------------------------------------------------------------------------------------------------------------------
  Fichier     : Robot.h
  Nom du labo : Labo 07 - Robots
  Auteur(s)   : Rayburn Nathan, Besia Flavien
  Date        : 13.12.2022
  But         :

  Remarque(s) : RAS

  Compilateur : Mingw-w64 g++ 12.2.0
  -------------------------------------------------------------------------------------------------------------------
*/

#ifndef PRG1_ROBOT_H
#define PRG1_ROBOT_H

#include <vector>
#include "annex.h"
#include <chrono>

enum class Directions{
    UP,
    DOWN,
    RIGHT,
    LEFT
};

class Robot{
public :

    // constructors
    Robot();

    // accessors

    // getter
    unsigned getPositionX() const;
    unsigned getPositionY() const;
    unsigned getID() const;
    bool getLife() const;
    unsigned getRobotKilledBy() const;

    std::vector<Directions> getAvailableDirections(unsigned limitX, unsigned limitY) const;
    std::chrono::system_clock::time_point getTimeOfDeath() const;

    // setter
    void setPositionX(unsigned x);
    void setPositionY(unsigned y);

    //methods
    void move(unsigned limitX, unsigned limitY);
    void kill(unsigned killerId);




    // overrides
    Robot& operator=(const Robot& other);
private :

    static unsigned _nextID;

    unsigned _x = 0;
    unsigned _y = 0;
    unsigned _id;
    bool _isAlive = true;
    unsigned _killedBy{};

    std::chrono::system_clock::time_point _timeOfDeath;
};


#endif //PRG1_ROBOT_H
