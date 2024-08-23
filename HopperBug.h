#include "Bug.h"
#include <iostream>
#include <vector>
#include <iomanip>
#include <utility>
#ifndef CLASSES_HOPPERBUG_H
#define CLASSES_HOPPERBUG_H
using namespace std;

class HopperBug: public Bug {
protected:

    int hopLength; // how much the bug will jump
private:
    int x, y;
public:
    HopperBug(string type, int id, std::pair<int, int> position, Direction direction, int size, int hopLength);
    virtual void move();
};

#endif // CLASSES_HOPPERBUG_H