#ifndef EX1_GRID_H
#define EX1_GRID_H

#include "Point.h"
#include "Graph.h"
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Grid: public Graph {
private:
    int width;
    int height;
    vector<vector<Point>> vectorOfVerticalVectors;
public:
    //m is the grid width, n is the grid height. the first point in the grid is (0,0).
    Grid(int m,int n);
    Grid(const Grid &grid);
    queue<Point>* getNeighbors(Point p);
};


#endif //EX1_GRID_H
