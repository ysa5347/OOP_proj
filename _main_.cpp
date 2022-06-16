#include <iostream>
#include <vector>
#include <string>

#include "Game.hpp"
#include "Card.hpp"
#include "CardDeck.hpp"
#include "UserInterface.hpp"
#include "Rule.hpp"
#include "Player.hpp"

using namespace std;
using namespace Game;

int main(){
    UserInterface UI;
    vector<Gamer> gamers;
    Rule rule;
    
    UI.initMsg();
    vector<string> names = UI.getUserName();
    
    for(int i = 0; i < 3; i++){
        string tempName = names.pop_back();
        Gamer tempGamer(tempName);
        gamers.push_back(tempGamer);
    }
    UI.welcomeMsg();

    // 덱을 섞는 중입니다...
    CardDeck gameDeck;          
    UI.shuffling();
    
    // 딜러 배정 및 플레이어 편입
    vector<Player*> players;    
    Dealer dealer;
    players.push_back(&dealer);
    for(int i = 0; i < 3; i++){
        players.push_back(&gamers[i]);
    }
    
    // 게임 시작
    UI.startMsg();
    Game::initPhase(&gameDeck, players);
    Game::hitPhase(&gameDeck, players);
    
    return 0;
}