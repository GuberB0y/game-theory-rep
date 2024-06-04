#ifndef MECHANICS_HPP
#define MECHANICS_HPP
#include "players.h"

//Creating a data struct for general statistics
struct statsOfTheLastGame{
    defaultPlayer* winner;
    defaultPlayer* loser;
    int winnerSMove;
    int loserSMove;
    size_t* currentIteration;
    size_t* allIterations;
    bool isTie; 
};

//Main function for playing game
void playGame(defaultPlayer* p1, defaultPlayer* p2, size_t* rounds ,size_t* iter);

#endif