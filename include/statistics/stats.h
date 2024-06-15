#ifndef STATS_HPP
#define STATS_HPP
#include <cstddef>
//Creating a data struct for general statistics
struct statsOfTheLastGame{
    int winnerID;
    int loserID;
    int winnerSMove;
    int loserSMove;
    size_t* currentIteration;
    size_t* allIterations;
    bool isTie; 
};

extern statsOfTheLastGame stats;

#endif