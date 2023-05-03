#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;

namespace ariel{
    class Point{
        double x_axis;
        double y_axis;

        public:
            Point(double x_axis, double y_axis):x_axis(x_axis),y_axis(y_axis){}
            double distance(Point &other);
            void print();
            void moveTowards(Point &other, double distance);
            bool isAlive();
    };
};
#endif