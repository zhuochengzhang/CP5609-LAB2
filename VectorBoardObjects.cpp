//
// Created by Nick Fan on 26/08/2022.
//

#include "VectorBoardObjectsH.h"
#include "Vector"
#include "BoardObjectH.h"
#include<iostream>
#include "Monster.h"
#include "Bomb.h"

using namespace std;

VectorBoardObjects::VectorBoardObjects(b_BoardObject theFirst) : alist() {
    std::vector<b_BoardObject>::iterator it;
    it = alist.begin();
    alist.insert(it, theFirst);
}

b_BoardObject VectorBoardObjects::theFirst() { //
    if (0 < alist.size()) {
        internalIterator = alist.begin();
        return (*internalIterator);
    } else
        return NULL;
}

void VectorBoardObjects::addOneObject(b_BoardObject newOne) { // add one object into the vector
    std::vector<b_BoardObject>::iterator it;
    it = alist.begin();
    alist.insert(it, newOne);
}

b_BoardObject VectorBoardObjects::theNext() {
    internalIterator++;
    if (internalIterator < alist.end()) {
        return (*internalIterator);
    } else
        return NULL;
}

void VectorBoardObjects::removeOneObject() {
    std::vector<b_BoardObject>::iterator it;
    it = alist.begin();
    while (it < alist.end()) {
        if (A_Monster == (*it)->get_Type()) {
            alist.erase(it);
            return;
        }
        it++;
    }

    return;
}


int main() { // main program
    BoardObject monster1 = Monster(2, 3); // create player object
    BoardObject bomb1 = Bomb(4, 6); // create second wall object

    VectorBoardObjects vectorBoardObjects(&monster1); // add the object address into the vector by using constructor
    vectorBoardObjects.addOneObject(&bomb1); // add one object address into the vector
    vectorBoardObjects.removeOneObject();

    cout << vectorBoardObjects.theFirst() << endl; // check the first object in the vector
    cout << vectorBoardObjects.theNext() << endl; // check the second object in the vector

    return 0;
}

