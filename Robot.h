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
    explicit Robot(unsigned id);
    Robot(unsigned id, unsigned x, unsigned y);

    // accessors

    // getter
    unsigned getPositionX() const;
    unsigned getPositionY() const;
    unsigned getID() const;
    bool getLife() const;
    int getRobotKilledBy() const;

    // setter
    void setPositionX(unsigned x);
    void setPositionY(unsigned y);
    void setLife(bool isAlive);
    void setRobotKilledBy(unsigned id);
    //methods
    void move(unsigned limitX, unsigned limitY);
    void setTimeOfDeath(const std::chrono::system_clock::time_point& timeOfDeath);

    std::vector<Directions> getAvailableDirections(unsigned limitX, unsigned limitY) const;
    std::chrono::system_clock::time_point getTimeOfDeath() const;


    // overrides
    Robot& operator=(const Robot& other);
private :

    unsigned _x = 0;
    unsigned _y = 0;
    unsigned _id;
    bool _isAlive = true;
    int _killedBy = -1;

    std::chrono::system_clock::time_point _timeOfDeath;

    static unsigned _nextID;


};


#endif //PRG1_ROBOT_H
