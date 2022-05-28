#include <iostream>
#include <vector>

#define J 10
#define Q 10
#define K 10

using namespace std;

bool YorN(){
    cout << ""
    while(1){
        if(c == 'Y' || c == 'y')
            return true;
        else if(c == 'N' || c == 'n')
            return false;
        else
            cout << "다시 입력해주세요." << endl;
        }
}

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
                return 
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