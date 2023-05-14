#ifndef TEAM_H
#define TEAM_H
#include <iostream>
#include "Point.hpp"
#include "Character.hpp"
#include "Cowboy.hpp"
#include "Ninja.hpp"
#include <vector>

using namespace std;

namespace ariel
{

    class Team
    {
        // Character listCharacter[10];
        vector<Character*> listCharacter;
        Character *leader;

    public:
        Team(Character *leader);
        void add(Character *leader);
        void attack(Team *enemy);
        int stillAlive();
        void print();
    };

    class TeamTow : public Team
    {
    public:
        TeamTow(Character *leader) : Team(leader) {}
        ~TeamTow();
        void attack(TeamTow *enemy);
        int stillAlive();
        void print();
    };

    class SmartTeam : public Team
    {
    public:
        SmartTeam(Character *leader) : Team(leader) {}
        ~SmartTeam();
        void attack(TeamTow *enemy);
        int stillAlive();
        void print();
    };
};
#endif