#include "players.h"
#include "mechanics.h"


int main(){
    //Players
    niceGuy nice;
    badGuy bad;
    oneZeroGuy oneZero;
    zeroOneGuy zeroOne;
    
    size_t rounds = 100;
    //cin >> rounds;
    for (size_t i = 0; i < rounds; i++)
    {
        playGame(&zeroOne , &oneZero ,  &rounds ,&i);
    }
    //Results
    cout<<"ZeroOneGuy: "<<endl;
    zeroOne.showStats();
    cout<<endl;
    cout<<"oneZeroGuy: "<<endl;
    oneZero.showStats();
    return 0;
}