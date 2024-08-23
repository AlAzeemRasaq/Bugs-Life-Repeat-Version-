#include "CrawlerBug.h"

CrawlerBug::CrawlerBug(string type, int id, std::pair<int, int> position, Direction direction, int size)  : Bug(type, id, position, direction, size) {}

void CrawlerBug::move(){}