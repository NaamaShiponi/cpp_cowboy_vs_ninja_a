#ifndef COWBOY_H
#define COWBOY_H
#include <iostream>
#include "Point.hpp"
#include "Character.hpp"

using namespace std;

namespace ariel
{

    class Cowboy : public Character
    {
        int cartridge;

    public:
        Cowboy(const string &name, const Point &location) : Character(name, location, 110)
        {
            cartridge = 6;
        };
        ~Cowboy(){};
        Cowboy(const Cowboy &) = delete;            // delete copy constructor
        Cowboy &operator=(const Cowboy &) = delete; // delete copy assignment operator
        Cowboy(Cowboy &&) = delete;                 // delete move constructor
        Cowboy &operator=(Cowboy &&) = delete;      // delete move assignment operator

        void shoot(Character *enemy);
        bool hasboolets();
        void reload();
    };
};
#endif