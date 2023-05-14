#ifndef NINJA_H
#define NINJA_H
#include <iostream>
#include "Point.hpp"
#include "Character.hpp"

using namespace std;

namespace ariel{

    class Ninja : public Character{
        int speed;

        public:
            Ninja(string name,const Point &location,int speed,int hitPoints):speed(speed),Character(name,location,hitPoints){};
            int getSpeeg(){return speed;}
            void move(Character *enemy);
            void slash(Character *enemy);


    };


    class OldNinja : public Ninja{
        public:
            OldNinja( const string name,const Point &location):Ninja(name,location,8,150){};

    };
    class YoungNinja : public Ninja{
        public:
            YoungNinja(const string name, const Point& location) : Ninja(name, location,14,100){};

    };
    class TrainedNinja : public Ninja{
        public:
            TrainedNinja(const string name,const Point &location):Ninja(name,location,12,120){};

    };

};
#endif