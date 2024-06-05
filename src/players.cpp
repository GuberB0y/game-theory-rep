#include "players.h"

                //Implementing default player class methods

//Creating functiond which adds 1 to basic infos
void defaultPlayer:: addWins(){this->wins++;}
void defaultPlayer:: addLoses(){this->loses++;}
void defaultPlayer:: addTies(){this->ties++;}
//Showing stats
void defaultPlayer:: showStats(){
    cout<<"Stats:"<<endl;
    cout<<"Wins: "<<this->wins<<endl;
    cout<<"Loses: "<<this->loses<<endl;
    cout<<"Ties: "<<this->ties<<endl;
}
//Creating virtual method which is overrided by derived classes
int defaultPlayer::play(){return 0;}

                //Implementing derived niceGuy class  
int niceGuy:: play(){return 0;}
void niceGuy:: desribe(){cout<<"Nice Guy only stays calm / returns 0"<<endl;}

                //Implementing derived badGuy class
int badGuy:: play(){return 1;}
void badGuy:: desribe(){cout<<"Bad Guy only attacks / returns 1"<<endl;}

                //Implementing derived oneZeroGuy class
void oneZeroGuy:: desribe(){cout<<"One Zero guy attacks first and stays calm  one by one/ returns 1,0,1,0,1,0..."<<endl;}
int oneZeroGuy:: play(){
    if (move){
            move--;
            return 1;
    }else{
            move++;
            return 0;
        }
}

                //Implementing derived zeroOneGuy class
void zeroOneGuy:: desribe(){cout<<"Zero One guy stays calm first and attacks one by one/ returns 0,1,0,1,0,1..."<<endl;}
int zeroOneGuy:: play(){
    if (move){
            move--;
            return 1;
    }else{
            move++;
            return 0;
        }
    }