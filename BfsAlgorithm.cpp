#include <map>
#include "BfsAlgorithm.h"

BfsAlgorithm::BfsAlgorithm(Graph *&theGraph) {
    graph = theGraph;
}

stack<Point> BfsAlgorithm::navigate(Point start, Point end) {
    stack<Point> path = stack<Point>();
    bool pathHasBeenFound = false;
    queue<Point> pointsToLookForNeighbors = queue<Point>();
    set<Point> visitedPoints = set<Point>();
    map<Point, Point> parentOfPoint = map<Point, Point>();
    map<Point, int> distanceOfPoint = map<Point, int>();

    //we have to delete the next line:
    parentOfPoint.insert(pair<Point,Point>(start, start));
    distanceOfPoint.insert(pair<Point,int>(start, 0));
    pointsToLookForNeighbors.push(start);

    while(!pointsToLookForNeighbors.empty()) {
        Point current = pointsToLookForNeighbors.front();
        pointsToLookForNeighbors.pop();
        int currentDistance = distanceOfPoint.at(current);

        queue<Point>* currentNeighbors = graph->getNeighbors(current);
        while (!currentNeighbors->empty()) {
            Point neighbor = currentNeighbors->front();
            currentNeighbors->pop();
            bool theNeighborHasBeenVisited = (visitedPoints.find(neighbor) != visitedPoints.end());
            if (!theNeighborHasBeenVisited) {
                visitedPoints.insert(neighbor);
                parentOfPoint.insert(pair<Point,Point>(neighbor, current));
                distanceOfPoint.insert(pair<Point,int>(neighbor, currentDistance + 1));
                pointsToLookForNeighbors.push(neighbor);
            }

            if (neighbor == end) {
                pathHasBeenFound = true;
                path.push(neighbor);
                Point previousPointOfPath = neighbor;
                do {
                    previousPointOfPath = parentOfPoint.at(previousPointOfPath);
                    path.push(previousPointOfPath);
                } while (!(previousPointOfPath == start));
                break;
            }
        }
        delete currentNeighbors;
        if (pathHasBeenFound)
            break;
    }
    return path;

}


