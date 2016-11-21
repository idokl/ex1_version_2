#ifndef EX1_GRAPH_H
#define EX1_GRAPH_H

#include <queue>
#include "Point.h"

using namespace std;

class Graph {
public:
    virtual queue<Point>* getNeighbors(Point n)=0;
};


#endif //EX1_GRAPH_H