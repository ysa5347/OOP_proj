#include <iostream>
#include <iomanip>

#include "Game.hpp"

using namespace Game

Game::Game():INIT_RECEIVE_CARD_COUNT(2), STOP_RECEIVE_CARD("0"){

}

vector<Player> Game::initPhase(CardDeck cardDeck, vector<Player> players){

}

vector<Player> Game::hitPhase(CardDeck cardDeck, vector<Player> players){
// hit phase는 initPhase를 거친 players와 Deck을 받아, hit/stay를 진행 후 Player vector를 return 한다.

}
