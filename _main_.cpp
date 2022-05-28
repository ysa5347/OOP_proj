#include <iostream>
#include <vector>
#include <string>
#include <time.h>

using namespace std;

class Card{
    int cardNum(int n){
        if( n >= 2 && n <= 10)
            return n;
        else
            return 0;
    }
    int cardNum(char n){
        switch(n){
            case 'J':
                return 10;
            case 'Q':
                return 10;
            case 'K':
                return 10;
            case 'A':
                return 10;
        }
    }
    

};

class Gamer{
private:
    vector<int> deck;
    int sum;
public:

};

class Player: Gamer{
private:
    string name;
};

class Dealer: Gamer{
    
};

// 상속, 다형성, 캡슐화, 추상화
int main(){
    return 0;
}