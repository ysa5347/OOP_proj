#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <iomanip>

#include "CardDeck.hpp"
#include "Player.hpp"
#include "Rule.hpp"

using namespace std;

class Game{
private:
    const int INIT_RECEIVE_CARD_COUNT;
    const string STOP_RECEIVE_CARD;
    vector<Player> hitPhase(CardDeck cardDeck, vector<Player> players);
    vector<Player> initPhase(CardDeck cardDeck, vector<Player> players);
    bool isAllPlayerTurnOff(vector<Player> players);
    bool isReceiveCard();
    vector<Player> initPhase(CardDeck cardDeck, vector<Player> players);

public:
    Game();
    
};

#endif