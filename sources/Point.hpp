#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;

namespace ariel{
    class Point{
        double x_axis;
        double y_axis;

        public:
            Point():x_axis(0.0),y_axis(0.0){}
            Point(double x_axis, double y_axis):x_axis(x_axis),y_axis(y_axis){}
            double distance(Point &other);
            void print();
            void moveTowards(Point &other, double distance);
            double getX() const {return x_axis;}
            double gety() const {return y_axis;}
    };
};
#endif