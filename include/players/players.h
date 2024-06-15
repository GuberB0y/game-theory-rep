#ifndef PLAYERS_HPP
#define PLAYERS_HPP
#include <iostream>
#include <vector>
#include <string>
#include <cstddef>
#include "stats.h"

using namespace std;

//Creating default player class
class defaultPlayer
{
    //Creating general info about a player in private 
private:
    int wins = 0;
    int loses = 0;
    int ties = 0;
    int ID;
    string name;
public:
    //Creating functiond which adds 1 to basic infos
    void addWins();
    void addLoses();
    void addTies();
    //Showing stats
    void showStats();
    //Creating virtual method which is overrided by derived classes
    virtual int play();
    //Get ID
    int getID();
    //showing name
    virtual void showName();
};

//Creating derived niceGuy class  
class niceGuy : public defaultPlayer
{
private:
    string name = "Nice Guy";
    int ID = 00;
public:
    int play() override;
    void desribe();
    int getID();
    void showName() override;
};

//Creating derived badGuy class
class badGuy : public defaultPlayer
{
private:
    string name = "Bad Guy";
    int ID = 01;
public:
    int play() override;
    void desribe();
    int getID();
    void showName() override;
};

//Creating derived oneZeroGuy class
class oneZeroGuy : public defaultPlayer
{
private:
    //Adding our "move checker"
    string name = "One Zero Guy";
    int ID = 02;
    int move = 1;
public:
    void desribe();
    int play() override;
    int getID();
    void showName() override;
};

//Creating derived zeroOneGuy class
class zeroOneGuy : public defaultPlayer
{
private:
    string name = "Zero One Guy";
    int ID = 03;
    //Adding our "move checker"s
    int move = 0;
public:
    void desribe();
    int play() override;
    int getID();
    void showName() override;
};

//Creating derived zeroCopierGuy class  
class zeroCopierGuy : public defaultPlayer
{
private:
    string name = "Zero Copier Guy";
    int ID = 04;
    //Adding first move
    int firstMove = 0;
public:
    int play() override;
    void desribe();
    int getID();
    void showName() override;
};

//Creating derived oneCopierGuy class  
class oneCopierGuy : public defaultPlayer
{
private:
    string name = "One Copier Guy";
    int ID = 05;
    int firstMove = 1;
public:
    int play() override;
    void desribe();
    int getID();
    void showName() override;
};

//Creating derived zeroWinCopierGuy class  
class zeroWinCopierGuy : public defaultPlayer
{
private:
    string name = "Zero Win Copier Guy";
    int ID = 06;
    //Adding first move
    int firstMove = 0;
public:
    int play() override;
    void desribe();
    int getID();
    void showName() override;
};

//Creating derived oneWinCopierGuy class  
class oneWinCopierGuy : public defaultPlayer
{
private:
    string name = "One Win Copier Guy";
    int ID = 07;
    int firstMove = 1;
public:
    int play() override;
    void desribe();
    int getID();
    void showName() override;
};

#endif