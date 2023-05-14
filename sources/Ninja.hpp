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
            Ninja(string name,const Point &location):Character(name,location){};

            void move(Character *enemy);
            void slash(Character *enemy);


    };


    class OldNinja : public Ninja{
        public:
            OldNinja( const string name,const Point &location):Ninja(name,location){};


    };
    class YoungNinja : public Ninja{
        public:
            YoungNinja(const string name, const Point& location) : Ninja(name, location){};

    };
    class TrainedNinja : public Ninja{
        public:
            TrainedNinja(const string name,const Point &location):Ninja(name,location){};

    };

};
#endif