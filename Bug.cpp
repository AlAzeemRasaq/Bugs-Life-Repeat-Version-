#include "Bug.h"

Bug::Bug(string type, int id, std::pair<int, int> position, Direction direction, int size) : id(id), position(position), direction(direction), size(size), alive(true) {
    this->type = type;
    this->id = id;
    this->position = position;
    this->direction = direction;
    this->size = size;
}

void Bug::move(){
    this->x = x;
    this->y = y;
}

bool Bug::isWayBlocked() const {
    const int maxX = 9, maxY = 9;

    switch(direction) {
        case 1: // North
            return position.second == 0;
        case 2: // East
            return position.first == maxX;
        case 3: // South
            return position.second == maxY;
        case 4: // West
            return position.first == 0;
        default:
            return false;
    }
}

int Bug::getId() const { return id; }
pair<int, int> Bug::getPosition() const { return position; }
Direction Bug::getDirection() const { return direction; }
int Bug::getSize() const { return size; }
bool Bug::isAlive() const { return alive; }
void Bug::setAlive() {  }
bool Bug::getEaten() { return eaten; }
void Bug::setEaten() {  }