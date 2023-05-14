#include <iostream>
using namespace std;

#include "Team.hpp" 
using namespace ariel;

Team::Team(Character *leader): leader(leader){}
void Team::add(Character *leader){}
void Team::attack(Team *enemy){}
int Team::stillAlive(){return 0;}
void Team::print(){}


TeamTow::~TeamTow(){}
void TeamTow::attack(TeamTow *enemy){}
int TeamTow::stillAlive(){return 0;}
void TeamTow::print(){}


SmartTeam::~SmartTeam(){}
void SmartTeam::attack(TeamTow *enemy){}
int SmartTeam::stillAlive(){return 0;}
void SmartTeam::print(){}