#include <iostream>
#include <vector>
#include <iomanip>
#include <utility>
#ifndef CLASSES_BUG_H
#define CLASSES_BUG_H
enum Direction {North = 1, South = 2, West = 3, East = 4};
using namespace std;

class Bug {
protected:

private:
    int x, y;
public:
    string type; // bug type (normal)
    int id; // bug identifier
    pair<int, int> position; // position of the bug
    Direction direction; // shows the direction of the bug's movement
    int size; // determines the size of the bug
    bool alive; // determines the status of the bug
    bool eaten; // determines if the bug was eaten, how unfortunate...

    Bug(string type, int id, std::pair<int, int> position, Direction direction, int size);

    virtual void move()=0;
    bool isWayBlocked() const;

    // here are the getters
    int getId() const;
    pair<int, int> getPosition() const;
    Direction getDirection() const;
    int getSize() const;
    bool isAlive() const;
    void setAlive();
    bool getEaten();
    void setEaten();
};

#endif // CLASSES_BUG_H
