//
// Created by Nick Fan on 26/08/2022.
//

/**
 * This header file is for bomb.cpp
 */

#ifndef CP5609_LAB2_BOMB_H
#define CP5609_LAB2_BOMB_H
#include "BoardObjectH.h"

class Bomb : public BoardObject{
private:
    ObjectColours ObjectColours;

public:
    Bomb (int start_x, int start_y):BoardObject(start_x,start_y)
    {
        ObjectColours = BLUE; // State the colour of the bomb object
        myClass = A_Bomb; // state the class of the bomb object

    };

    void touch (); // create touch method with no return value

};


#endif //CP5609_LAB2_BOMB_H
