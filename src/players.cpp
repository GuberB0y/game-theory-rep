#include "players.h"

                //Implementing default player class methods

//Creating functiond which adds 1 to basic infos
void defaultPlayer:: addWins(){this->wins++;}
void defaultPlayer:: addLoses(){this->loses++;}
void defaultPlayer:: addTies(){this->ties++;}

//Showing stats
void defaultPlayer:: showStats(){
    std::cout<<"Stats:"<<std::endl;
    std::cout<<"Wins: "<<this->wins<<std::endl;
    std::cout<<"Loses: "<<this->loses<<std::endl;
    std::cout<<"Ties: "<<this->ties<<std::endl;
}

//Creating virtual method which is overrided by derived classes
int defaultPlayer::play(){return 0;}

//Get ID
int defaultPlayer::getID(){return this->ID;}

//showing name
void defaultPlayer::showName(){std::cout<<this->name<<std::endl;}

//Implementing derived niceGuy class  
int niceGuy:: play(){return 0;}
void niceGuy:: desribe(){std::cout<<"Nice Guy only stays calm / returns 0"<<std::endl;}
int niceGuy::getID(){return this->ID;}
void niceGuy::showName(){std::cout<<this->name<<std::endl;}

//Implementing derived badGuy class
int badGuy:: play(){return 1;}
void badGuy:: desribe(){std::cout<<"Bad Guy only attacks / returns 1"<<std::endl;}
int badGuy::getID(){return this->ID;}
void badGuy::showName(){std::cout<<this->name<<std::endl;}

//Implementing derived oneZeroGuy class
void oneZeroGuy:: desribe(){std::cout<<"One Zero guy attacks first and stays calm  one by one/ returns 1,0,1,0,1,0..."<<std::endl;}
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
void oneZeroGuy::showName(){std::cout<<this->name<<std::endl;}

//Implementing derived zeroOneGuy class
void zeroOneGuy:: desribe(){std::cout<<"Zero One guy stays calm first and attacks one by one/ returns 0,1,0,1,0,1..."<<std::endl;}
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
void zeroOneGuy::showName(){std::cout<<this->name<<std::endl;}

//Implementing derived zeroCopierGuy class
void zeroCopierGuy:: desribe(){std::cout<<"Zero Copier Guy stays calm first and copies opponent's move"<<std::endl;}
int zeroCopierGuy:: play(){
    if (firstMove == 0){
        firstMove++;
        return 0;
        }
    else if (stats.winnerID == zeroCopierGuy::getID()){return stats.loserSMove;}
    else{return stats.winnerSMove;}
}
int zeroCopierGuy::getID(){return this->ID;}
void zeroCopierGuy::showName(){std::cout<<this->name<<std::endl;}

//Implementing derived oneCopierGuy class
void oneCopierGuy::desribe(){std::cout<<"One Copier Guy attacks first and copies opponent's move"<<std::endl;}
int oneCopierGuy:: play(){
    if (firstMove == 1){
        firstMove--;
        return 1;
        }
    else if (stats.winnerID == oneCopierGuy::getID()){return stats.loserSMove;}
    else{return stats.winnerSMove;}
}
int oneCopierGuy::getID(){return this->ID;}
void oneCopierGuy::showName(){std::cout<<this->name<<std::endl;}

//Implementing derived zeroWinCopierGuy class
void zeroWinCopierGuy::desribe(){std::cout<<"Zero Win Copier Guy stays calm first and copies winners move"<<std::endl;}
int zeroWinCopierGuy::play(){
    if (firstMove == 0){
        firstMove++;
        return 0;
        }
    else{return stats.winnerSMove;}
}
int zeroWinCopierGuy::getID(){return this->ID;}
void zeroWinCopierGuy::showName(){std::cout<<this->name<<std::endl;}

//Implementing derived oneWinCopierGuy class
void oneWinCopierGuy::desribe(){std::cout<<"One Win Copier Guy attacks first and copies winners move"<<std::endl;}
int oneWinCopierGuy::play(){
    if (firstMove == 1){
        firstMove--;
        return 1;
        }
    else{return stats.winnerSMove;}
}
int oneWinCopierGuy::getID(){return this->ID;}
void oneWinCopierGuy::showName(){std::cout<<this->name<<std::endl;}