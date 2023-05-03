#ifndef COWBOY_H
#define COWBOY_H
#include <iostream>
#include "Point.hpp"
#include "Character.hpp"

using namespace std;

namespace ariel{


    class Cowboy : public Character{
        int cartridge;

        public:
            Cowboy(string name,Point &location):Character(name,location){};
            void shoot(Character &enemy);
            bool hasboolets();
            void reload();
    };
};
#endif