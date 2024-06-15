#include "mechanics.h"

//Main function for playing game
void playGame(defaultPlayer* p1, defaultPlayer* p2, size_t* rounds ,size_t* iter){
    //Setting stats
    stats.allIterations = rounds;
    stats.currentIteration = iter;
    //Calling play() methods
    int p1Move = p1->play();
    int p2Move = p2->play();

    //First case
    if (p1Move > p2Move)
    {
        //Calling addWins() to add wins to the winner
        p1->addWins();
        stats.winnerID = p1->getID();
        stats.winnerSMove = p1Move;

        //Same with loser | addLoses() 
        p2->addLoses();
        stats.loserID = p2->getID();
        stats.loserSMove = p2Move;
        
    }else if (p1Move < p2Move)
    {
        //Calling addWins() to add wins to the winner
        p2->addWins();
        stats.winnerID = p2->getID();
        stats.winnerSMove = p2Move;

        //Same with loser | addLoses() 
        p1->addLoses();
        stats.loserID = p1->getID();
        stats.loserSMove = p1Move;
        
    }else
    {
        stats.isTie = true; //Declaring that last round was a tie round

        p1->addTies();
        p2->addTies();
    }
};