#ifndef TEAM_H
#define TEAM_H

#include <iostream>
#include <vector>
#include "Character.hpp"
#include "Cowboy.hpp"
#include "Ninja.hpp"
#include "Point.hpp"

using namespace std;

namespace ariel {

    class Team {
        vector<Character*> listCharacter;
        Character* leader;

    public:
        Team(Character* leader);
        void add(Character* member);
        void attack(Team* enemy);
        int stillAlive();
        void print();
    };

    class Team2 : public Team {
    public:
        Team2(Character* leader) : Team(leader) {}
        ~Team2();
        void attack(Team2* enemy);
        int stillAlive();
        void print();
    };

    class SmartTeam : public Team {
    public:
        SmartTeam(Character* leader) : Team(leader) {}
        ~SmartTeam();
        void attack(Team2* enemy);
        int stillAlive();
        void print();
    };

}

#endif
