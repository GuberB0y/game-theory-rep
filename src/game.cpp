#include "mechanics.h"


int main(){
    //Players
    niceGuy nice;
    badGuy bad;
    oneZeroGuy oneZero;
    zeroOneGuy zeroOne;
    oneCopierGuy oneCopier;
    zeroCopierGuy zeroCopier;
    oneWinCopierGuy oneWinCopier;
    zeroWinCopierGuy zeroWinCopier;
    
    //give rounds
    size_t rounds;
    cin >> rounds;
    //GAME:
    for (size_t i = 0; i < rounds; i++)
    {
        playGame(&nice , &bad ,  &rounds ,&i);
    }
    //Results
    nice.showName();
    nice.showStats();
    cout<<endl;
    bad.showName();
    bad.showStats();
    return 0;
}
