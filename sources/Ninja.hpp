#ifndef NINJA_H
#define NINJA_H

#include <iostream>
#include "Point.hpp"
#include "Character.hpp"

namespace ariel
{
    const int DEFAULT_SPEED = 10;
    const int DEFAULT_HITPOINTS = 100;
    const int OLD_NINJA_SPEED = 8;
    const int OLD_NINJA_HITPOINTS = 150;
    const int YOUNG_NINJA_SPEED = 14;
    const int YOUNG_NINJA_HITPOINTS = 100;
    const int TRAINED_NINJA_SPEED = 12;
    const int TRAINED_NINJA_HITPOINTS = 120;

    class Ninja : public Character
    {
        int speed;
        int hitPoints;

    public:
        Ninja(const std::string& name, const Point& location, int speed = DEFAULT_SPEED, int hitPoints = DEFAULT_HITPOINTS)
            : Character(name, location, hitPoints), speed(speed), hitPoints(hitPoints) {}
        Ninja(const Ninja&) = delete;
        Ninja& operator=(const Ninja&) = delete;
        Ninja(Ninja&&) = delete;
        Ninja& operator=(Ninja&&) = delete;

        int getSpeed() const { return speed; }
        int getHitPoints() const { return hitPoints; }
        void move(Character* enemy);
        void slash(Character* enemy);
    };

    class OldNinja : public Ninja
    {
    public:
        OldNinja(const std::string& name, const Point& location)
            : Ninja(name, location, OLD_NINJA_SPEED, OLD_NINJA_HITPOINTS) {}
    };

    class YoungNinja : public Ninja
    {
    public:
        YoungNinja(const std::string& name, const Point& location)
            : Ninja(name, location, YOUNG_NINJA_SPEED, YOUNG_NINJA_HITPOINTS) {}
    };

    class TrainedNinja : public Ninja
    {
    public:
        TrainedNinja(const std::string& name, const Point& location)
            : Ninja(name, location, TRAINED_NINJA_SPEED, TRAINED_NINJA_HITPOINTS) {}
    };

} 

#endif 
