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
            Ninja(string name,Point &location):Character(name,location){};

            void move(Character &enemy);
            void slash(Character &enemy);


    };


    class OldNinja : public Ninja{
        public:
            OldNinja( string name,Point &location):Ninja(name,location){};


    };
    class YountNinja : public Ninja{
        public:
            YountNinja(string name,Point &location):Ninja(name,location){};

    };
    class TrainedNinja : public Ninja{
        public:
            TrainedNinja(string name,Point &location):Ninja(name,location){};

    };

};
#endif