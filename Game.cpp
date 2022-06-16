#include <iostream>
#include <iomanip>
#include <time.h>


#include "Game.hpp"

namespace Game{
    const int INIT_RECEIVE_CARD_COUNT = 2;
    const string STOP_RECEIVE_CARD = "S";       // Stay

    void Game::initPhase(CardDeck* cardDeck, vector<Player*> &players){
        std::cout << "Handing out the first couple cards to everyone..." << std::endl;
    
        for(int n = 0; n < players.size(); n++){
            Player* player = players[n];
            std::cout << player->getName() << "'s turn." << std::endl;
            for(int i = 0; i < INIT_RECEIVE_CARD_COUNT; i++){
                Card tempCard = cardDeck->draw();
                player->receiveCard(tempCard);
            }
            std::cout << player->getName() << "'s cards are : ";
            vector<Card> cards = player->openCards();
            for(int i = 0; i < cards.size(); i++){
                std::cout << cards[i].getPattern << cards[i].getDenomination << " ";
            }
            std::cout << endl;
        }
    }

    void Game::hitPhase(CardDeck* cardDeck, vector<Player*> &players){
    // hit phase는 initPhase를 거친 players와 Deck을 받아, hit/stay를 진행 후 Player vector를 return 한다.
        
    }
}
