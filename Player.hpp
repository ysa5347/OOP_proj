#ifndef PLAYER_H
#define PLAYER_H

#include "Card.hpp"

using namespace std;

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
#endif