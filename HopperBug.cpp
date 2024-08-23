#include "HopperBug.h"

HopperBug::HopperBug(string type, int id, std::pair<int, int> position, Direction direction, int size, int hopLength) : Bug(type, id, position, direction, size) {
    this->hopLength = hopLength;
}

void HopperBug::move(){
    this->x = x;
    this->y = y;
}
