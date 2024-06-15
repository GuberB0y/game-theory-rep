# Prisoner's Dilemma Simulation
## Overview
This project is a C++ implementation of the classic game theory problem known as the Prisoner's Dilemma. 
The simulation models the interactions between two prisoners who must decide whether to cooperate with or betray each other without knowing the other's decision. 
The outcomes are determined by their combined choices, demonstrating the concepts of trust, betrayal, and payoff in competitive environments.

///

In this repository there are 8 players
* Nice Guy : always stays calm (doesn't attack)
* Bad Guy : always attacks
* Zero One Guy : stays calm first then attacks then stays calm then attacks...
* One Zero Guy : attacks first then stays calm then attacks then stays calm...
* Zero Copier Guy : stays calm first then copies opponent's move
* One Copier Guy : attacks first then copies opponent's move
* Zero Win Copier : stays calm first then copies winners's move
* One Win Copier : attacks first then copies winners's move

All players have methods which describes them 

///

There is no custom player yet
IT'S JUST BACK END OF FUTURE SFML GAME WHICH IS CURRENTLY IN CREATION PROCESS

///
## Requirements
* Cmake
* Any compiler (clang or gcc)

## How to use
The main header file is mechanics.h which is in include folder
The game.cpp (in src folder) file is an template which shows how to use the library
You can add your new player class in players.h (include folder) and implement it's methods in players.cpp (src folder)
