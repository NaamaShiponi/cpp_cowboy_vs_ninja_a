#include <iostream>
using namespace std;
using namespace ariel;

#include "Team.hpp" 

Team::~Team(){}
void Team::add(Character &leader){}
void Team::attack(Team &enemy){}
int Team::stillAlive(){return 2;}
void Team::Print(){}


Team2::~Team2(){}
void Team2::attack(Team2 &enemy){}
int Team2::stillAlive(){return 2;}
void Team2::print(){}


SmartTeam::~SmartTeam(){}
void SmartTeam::attack(Team2 &enemy){}
int SmartTeam::stillAlive(){return 2;}
void SmartTeam::print(){}