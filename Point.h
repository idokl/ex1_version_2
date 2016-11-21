//
//
//

#ifndef EX1_POINT_H
#define EX1_POINT_H

#include <iostream>
#include "node.h"

using namespace std;

class Point {
private:
    int x;
    int y;
public:
    Point(int x, int y);
    int getX();
    int getY();
    void print() const;
    bool operator==(const Point &p1) const;
    bool operator<(const Point &p1) const;
    friend ostream& operator <<(ostream& os, const Point &point);
};


#endif //EX1_POINT_H
