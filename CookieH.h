//
// Created by Nick Fan on 26/08/2022.
//

#ifndef CP5609_LAB2_COOKIEH_H
#define CP5609_LAB2_COOKIEH_H

#ifndef H_COOKIE
#define H_COOKIE
enum CookieState { VISIBLE, EATEN, EXPIRED};

enum PrizeValueIndex {CHEAP, MEDIUM, USEFUL, DEAR};


#include "BoardObjectH.h"

class Cookie : public BoardObject
{

private:
    CookieState status;
    ObjectColours color1;
    ObjectColours  color2;
    PrizeValueIndex valueIndex;

public:
    Cookie (int start_x, int start_y):BoardObject(start_x,start_y)
    { status=VISIBLE;
        color1 = YELLOW;
        color2  = BLUE;
        valueIndex=CHEAP;
        myClass=A_COOKIE;
    };

    int get_value();

    void touch ();
};
#endif
#endif //CP5609_LAB2_COOKIEH_H
