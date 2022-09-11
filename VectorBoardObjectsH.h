//
// Created by Nick Fan on 26/08/2022.
//

/**
 * This header file is for VectorBoardObjects.cpp
 */
#ifndef CP5609_LAB2_VECTORBOARDOBJECTSH_H
#define CP5609_LAB2_VECTORBOARDOBJECTSH_H

#include <Vector>
#include "BoardObjectH.h"


using namespace std;

typedef BoardObject *b_BoardObject;

class VectorBoardObjects {
    vector<b_BoardObject> alist; // Create vector object named alist
    vector<b_BoardObject>::iterator internalIterator; // create iterator object for vector list

public:
    VectorBoardObjects(b_BoardObject theFirst); // build the constructor


    b_BoardObject theFirst(); // create theFirst method with b_BoardObject return value
    b_BoardObject theNext(); // create the next method with b_BoardObject return value
    void addOneObject(b_BoardObject newOne);// create addOneObject method with no return value
    void removeOneObject(); // Create removeOneObject with no return value
};


#endif //CP5609_LAB2_VECTORBOARDOBJECTSH_H
