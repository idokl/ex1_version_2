/*
 * This class represents set of points (vertices) and edges (edge is a connection
 * between pair of Points. the edges define the neighbors of every Point).
*/

#ifndef EX1_GRAPH_H
#define EX1_GRAPH_H

#include <queue>
#include "Point.h"

using namespace std;

class Graph {
public:
    //return queue that maintain all the Points that have a direct access to the Point p
    virtual queue<Point>* getNeighbors(Point p)=0;
    //destructor
    virtual ~Graph();
};

#endif //EX1_GRAPH_H