//
// Created by Nick Fan on 26/08/2022.
//

#ifndef CP5609_LAB2_BOARDOBJECTH_H
#define CP5609_LAB2_BOARDOBJECTH_H

#ifndef H_BOARD_OBJECT
#define H_BOARD_OBJECT
enum ObjectColours { BLACK, YELLOW, BLUE, RED, INVISIBLE, BACKGROUND};
enum ObjectTypes { THE_BACKGROUND, A_COOKIE, A_PLAYER ,A_WALL, A_Monster, A_Bomb};


class BoardObject
{

private:
    int x,y;
    ObjectColours currentColor;
protected:
    ObjectTypes myClass;
    //int unique_ID;
    //static int count;
public:
    BoardObject (int start_x, int start_y)
    { x=start_x; y=start_y;
        currentColor=BACKGROUND;
        myClass=THE_BACKGROUND;

        //unique_ID=count++;
    };

    //int get_ID() { return unique_ID;};

    int get_x() { return x;};
    int get_y() { return y;};
    ObjectTypes get_Type() {return myClass;}


    ObjectColours get_Color() {return currentColor; }

    virtual void touch() {currentColor=BACKGROUND; }

protected:

    void set_color(ObjectColours new_color)
    {currentColor=new_color;};
    void set_x(int new_x) { x=new_x;};
    void set_y(int new_y) {y=new_y;};


};

//int BoardObject::count=0;
#endif // H_BOARD_OBJECT

#endif //CP5609_LAB2_BOARDOBJECTH_H
