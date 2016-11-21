//
// Created by ido on 15/11/16.
//

#ifndef EX1_BFS_H
#define EX1_BFS_H

using  namespace std;

#include <queue>
#include <set>
#include <stack>
#include "Point.h"
#include "Grid.h"

class BfsAlgorithm {
private:
    Graph* graph;
public:
    BfsAlgorithm(Graph *&theGraph);
    stack<Point> navigate(Point start, Point end);
};


#endif //EX1_BFS_H
