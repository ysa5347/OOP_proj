#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <iomanip>

#include "CardDeck.hpp"
#include "Card.hpp"
#include "Player.hpp"
#include "Rule.hpp"
#include "UserInterface.hpp"

using namespace std;

namespace Game{
    const int INIT_RECEIVE_CARD_COUNT;
    const string STOP_RECEIVE_CARD;

    void initPhase(CardDeck *cardDeck, vector<Player*> &players);
    void hitPhase(CardDeck *cardDeck, vector<Player*> &players);

    bool isAllPlayerTurnOff(vector<Player> players);
    bool isReceiveCard();
}

#endif