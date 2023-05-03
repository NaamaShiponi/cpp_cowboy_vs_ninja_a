#ifndef TEAM_H
#define TEAM_H
#include <iostream>
#include "Point.hpp"
#include "Character.hpp"
#include "Cowboy.hpp"
#include "Ninja.hpp"

using namespace std;

namespace ariel{


    class Team {
        Character listCharacter[10]; 
        Character &leader;
        
        public:

            Team(Character &leader);
            ~Team();
            void add(Character &leader);
            void attack(Team &enemy);
            int stillAlive();
            void Print();

    };

    class Team2 : public Team {
        public:

            Team2(Character &leader):Team(leader){}
            ~Team2();
            void attack(Team2 &enemy);
            int stillAlive();
            void print();

    };


    class SmartTeam : public Team {
        public:

            SmartTeam(Character &leader):Team(leader){}
            ~SmartTeam();
            void attack(Team2 &enemy);
            int stillAlive();
            void print();

    };
};
#endif