#ifndef PLAYERS_HPP
#define PLAYERS_HPP
#include <iostream>
#include <vector>
#include <string>
#include <cstddef>

using namespace std;

//Creating default player class
class defaultPlayer
{
    //Creating general info about a player in private 
private:
    int wins = 0;
    int loses = 0;
    int ties = 0;
public:
    //Creating functiond which adds 1 to basic infos
    void addWins();
    void addLoses();
    void addTies();
    //Showing stats
    void showStats();
    //Creating virtual method which is overrided by derived classes
    virtual int play();
};

//Creating derived niceGuy class  
class niceGuy : public defaultPlayer
{
public:
    int play() override;
    void desribe();
};

//Creating derived badGuy class
class badGuy : public defaultPlayer
{
public:
    int play() override;
    void desribe();
};

//Creating derived oneZeroGuy class
class oneZeroGuy : public defaultPlayer
{
private:
    //Adding our "move checker"
    int move = 1;
public:
    void desribe();
    int play() override;
};

//Creating derived zeroOneGuy class
class zeroOneGuy : public defaultPlayer
{
private:
    //Adding our "move checker"
    int move = 0;
public:
    void desribe();
    int play() override;
};

#endif