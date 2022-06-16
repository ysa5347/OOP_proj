#ifndef GAME_H
#define GAME_H

#include "CardDeck.hpp"
#include "Player.hpp"

using namespace std;

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

#endif