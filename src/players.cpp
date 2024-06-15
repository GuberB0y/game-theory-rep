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

//Get ID
int defaultPlayer::getID(){return this->ID;}

//showing name
void defaultPlayer::showName(){cout<<this->name<<endl;}

//Implementing derived niceGuy class  
int niceGuy:: play(){return 0;}
void niceGuy:: desribe(){cout<<"Nice Guy only stays calm / returns 0"<<endl;}
int niceGuy::getID(){return this->ID;}
void niceGuy::showName(){cout<<this->name<<endl;}

//Implementing derived badGuy class
int badGuy:: play(){return 1;}
void badGuy:: desribe(){cout<<"Bad Guy only attacks / returns 1"<<endl;}
int badGuy::getID(){return this->ID;}
void badGuy::showName(){cout<<this->name<<endl;}

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
int oneZeroGuy::getID(){return this->ID;}
void oneZeroGuy::showName(){cout<<this->name<<endl;}

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
int zeroOneGuy::getID(){return this->ID;}
void zeroOneGuy::showName(){cout<<this->name<<endl;}

//Implementing derived zeroCopierGuy class
void zeroCopierGuy:: desribe(){cout<<"Zero Copier Guy stays calm first and copies opponent's move"<<endl;}
int zeroCopierGuy:: play(){
    if (firstMove == 0){
        firstMove++;
        return 0;
        }
    else if (stats.winnerID == zeroCopierGuy::getID()){return stats.loserSMove;}
    else{return stats.winnerSMove;}
}
int zeroCopierGuy::getID(){return this->ID;}
void zeroCopierGuy::showName(){cout<<this->name<<endl;}

//Implementing derived oneCopierGuy class
void oneCopierGuy::desribe(){cout<<"One Copier Guy attacks first and copies opponent's move"<<endl;}
int oneCopierGuy:: play(){
    if (firstMove == 1){
        firstMove--;
        return 1;
        }
    else if (stats.winnerID == oneCopierGuy::getID()){return stats.loserSMove;}
    else{return stats.winnerSMove;}
}
int oneCopierGuy::getID(){return this->ID;}
void oneCopierGuy::showName(){cout<<this->name<<endl;}

//Implementing derived zeroWinCopierGuy class
void zeroWinCopierGuy::desribe(){cout<<"Zero Win Copier Guy stays calm first and copies winners move"<<endl;}
int zeroWinCopierGuy::play(){
    if (firstMove == 0){
        firstMove++;
        return 0;
        }
    else{return stats.winnerSMove;}
}
int zeroWinCopierGuy::getID(){return this->ID;}
void zeroWinCopierGuy::showName(){cout<<this->name<<endl;}

//Implementing derived oneWinCopierGuy class
void oneWinCopierGuy::desribe(){cout<<"One Win Copier Guy attacks first and copies winners move"<<endl;}
int oneWinCopierGuy::play(){
    if (firstMove == 1){
        firstMove--;
        return 1;
        }
    else{return stats.winnerSMove;}
}
int oneWinCopierGuy::getID(){return this->ID;}
void oneWinCopierGuy::showName(){cout<<this->name<<endl;}