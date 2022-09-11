//
// Created by Nick Fan on 26/08/2022.
//

/**
 *  This header file is for monster.cpp
 */

#ifndef CP5609_LAB2_MONSTER_H
#define CP5609_LAB2_MONSTER_H


#include "BoardObjectH.h"

class Monster : public BoardObject{ // extends BoardObejct class
private:
    ObjectColours ObjectColours;

public:
    Monster (int start_x, int start_y):BoardObject(start_x,start_y)
    {
        ObjectColours = BLUE; // state the colour of the monster object
        myClass = A_Monster; // state the class of monster class

    };

    void touch (); // create the touch method with no return values

};


#endif //CP5609_LAB2_MONSTER_H
