#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include "Point.hpp"


using namespace std;

namespace ariel{

    class Character{
        Point &location;
        int hitPoints;
        string name;

        public:
            Character(string name,Point &location):location(location),name(name){};
            double distance(Character &other);
            void hit(int hitP);
            string getName();
            Point getLocation();
            void print();
    };
};
#endif