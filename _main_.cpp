#include <iostream>
#include <vector>
#include <string>

#include "UI.h"

using namespace std;

class Card{
private:
    string pattern;
    string denomination;

public:
    Card(string _pattern, string _denomination);
    string getPattern();
    void setPattern(string _pattern);
    string getDenomination();
    void setDenomination(string _denomination);
};
// hi
class CardDeck{
private:
    vector<Card> cards;
    const vector<string> PATTERNS;
    const int CARD_COUNT;
    vector<Card> generateCards();

public:
    CardDeck();
    Card getCards();
    Card draw();
};

class Player{
private:
    vector<Card> cards;
    bool turn;
    const string NAME;

public:
    Player();
    void receiveCard(Card _card);
    vector<Card> openCards();
    void showCards();
    void turnOff();
    void turnOn();
    bool isTurn();
    string getName();
    void setTurn(bool _turn);
    int getPointSum();

};

class Dealer: public Player{
private:
    const int CAN_RECEIVE_POINT;
    bool isReceiveCard();

public:
    Dealer();

};

class Gamer: public Player{
public:
    Gamer(string _name);

};

class Rule{
public:
    int getScore(vector<Card> _cards);
    Player getWinner(vector<Player> players);

};

class Game{
private:
    const int INIT_RECEIVE_CARD_COUNT;
    const string STOP_RECEIVE_CARD;
    vector<Player> playingPhase(CardDeck cardDeck, vector<Player> players);
    bool isAllPlayerTurnOff(vector<Player> players);
    bool isReceiveCard();
    vector<Player> initPhase(CardDeck cardDeck, vector<Player> players);

public:
    Game();

};


int main(){
    
    return 0;
}