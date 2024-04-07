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
};



int main(){
    

    return 0;
}