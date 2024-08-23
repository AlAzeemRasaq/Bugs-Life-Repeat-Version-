#include "Bug.h"
#include <iostream>
#include <vector>
#include <iomanip>
#include <utility>
#ifndef CLASSES_CRAWLERBUG_H
#define CLASSES_CRAWLERBUG_H
using namespace std;

class CrawlerBug: public Bug {

public:
    CrawlerBug(string type, int id, std::pair<int, int> position, Direction direction, int size);

    virtual void move();
    bool isWayBlocked() const;


};

#endif // CLASSES_CRAWLERBUG_H