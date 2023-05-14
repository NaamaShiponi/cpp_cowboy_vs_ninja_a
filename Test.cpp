#include "doctest.h"
#include "sources/Team.hpp"
#include <stdexcept>
#include <iostream>


using namespace std;
using namespace ariel;


TEST_CASE("check Point class"){
    Point a(32.3,44),b(1.3,3.5);
    CHECK(a.distance(b) == b.distance(a));
    Point newPoint;
    CHECK(newPoint.getX()==0.0);
    CHECK(newPoint.gety()==0.0);
    CHECK_THROWS(newPoint.moveTowards(a,-22));
}
TEST_CASE("check Cowboy class"){
    Point a(1,1);
    Cowboy *tom = new Cowboy("Tom", a);
    tom->reload();
    CHECK(tom->hasboolets() == true);
    CHECK(tom->getName() == "Tom");
    CHECK(tom->getLocation().getX() == 1);
    CHECK(tom->getLocation().getX() == 1);
    Point b(2,1);
    Cowboy *naama = new Cowboy("Naama", b);

    CHECK(tom->distance(naama) == 1);
}
TEST_CASE("check Ninja class"){
    Point a(1,1);
    OldNinja *sushi = new OldNinja("Sushi", a);
    CHECK(sushi->getName() == "Sushi");
    CHECK(sushi->getLocation().getX() == 1);
    CHECK(sushi->getLocation().getX() == 1);
    YoungNinja *tom = new YoungNinja("Tom", a);
    TrainedNinja *naama = new TrainedNinja("Naama", a);
    CHECK(sushi->getSpeeg()==8);
    CHECK(tom->getSpeeg()==14);
    CHECK(naama->getSpeeg()==12);

}

TEST_CASE("check Team class"){
    Point a(1,1);
    YoungNinja *tom = new YoungNinja("Tom", a);
    Team team_A(tom);
    CHECK(team_A.stillAlive()==1); 
    CHECK_NOTHROW(team_A.add(new YoungNinja("2", Point(64,57))));
    CHECK_NOTHROW(team_A.add(new Cowboy("3", a)));
    team_A.add(new Cowboy("4", a));
    team_A.add(new Cowboy("5", a));
    team_A.add(new Cowboy("6", a));
    team_A.add(new Cowboy("7", a));
    team_A.add(new Cowboy("8", a));
    team_A.add(new Cowboy("9", a));
    team_A.add(new Cowboy("10", a));
    CHECK_THROWS(team_A.add(new Cowboy("11", a)));
    CHECK(team_A.stillAlive()==10);

}

