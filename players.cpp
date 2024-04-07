#include <iostream>
#include <vector>
#include <string>
using namespace std;

//Creating default player class
class defaultPlayer
{
private:
    int wins = 0;
    int loses = 0;
    int ties = 0;
public:
    void addWins(){this->wins++;}
    void addLoses(){this->loses++;}
    void addTies(){this->ties++;}
    void showStats(){
        cout<<"Stats:"<<endl;
        cout<<"Wins: "<<this->wins<<endl;
        cout<<"Loses: "<<this->loses<<endl;
        cout<<"Ties: "<<this->ties<<endl;
    }
    virtual int play(){}
};
//Creating a data struct for general statistics
struct statsOfTheLastGame
{
    
};

//Creating derived niceGuy class  
class niceGuy : defaultPlayer
{
public:
    int play() override{return 0;}
};
//Creating derived badGuy class
class badGuy : defaultPlayer
{
public:
    int play() override{return 1;}
};

void playGame(defaultPlayer* p1, defaultPlayer* p2){
    if (p1->play() > p2->play())
    {
        p1->addWins();
        p2->addLoses();
    }else if (p1->play() < p2->play())
    {
        p2->addWins();
        p1->addLoses();
    }else
    {
        p1->addTies();
        p2->addTies();
    }


}


int main(){
    defaultPlayer playerCheck;
    playerCheck.addWins();
    playerCheck.showStats();

    return 0;
}