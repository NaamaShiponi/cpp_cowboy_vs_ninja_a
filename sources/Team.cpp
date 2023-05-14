#include <iostream>
using namespace std;

#include "Team.hpp" 
using namespace ariel;

Team::Team(Character *leader): leader(leader){}
void Team::add(Character *leader){}
void Team::attack(Team *enemy){}
int Team::stillAlive(){return 0;}
void Team::print(){}


Team2::~Team2(){}
void Team2::attack(Team2 *enemy){}
int Team2::stillAlive(){return 0;}
void Team2::print(){}


SmartTeam::~SmartTeam(){}
void SmartTeam::attack(Team2 *enemy){}
int SmartTeam::stillAlive(){return 0;}
void SmartTeam::print(){}