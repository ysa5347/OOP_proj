#include <iostream>
#include <vector>

#include "Rule.hpp"

int Rule::getScore(vector<Card> _cards){
    int sum = 0;
    for(int i = 0; !_cards.empty(); i++){
        Card tempCard = _cards.back();
        _cards.pop_back();

        sum += tempCard.getDenomination();              // getDenomination return 값 변경해주세요.
    }
    return sum;
}

Player Rule::getWinner(vector<Player> players){
    int maxPoint = 0;
    Player* highestPlayer = nullptr;

    for(int i = 0; i < players.size(); i++){
        int tempPlayerSum = getScore(players[i].openCards());
        if(tempPlayerSum > maxPoint){
                highestPlayer = &players[i];
                maxPoint = tempPlayerSum;
            }
    }
    return *highestPlayer;
    
}

 