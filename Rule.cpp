#include <iostream>

#include "Rule.hpp"

int Rule::getScore(vector<Card> _cards){
    
}

Player Rule::getWinner(vector<Player> players){
    int maxPoint = 0;
    Player* highestPlayer = nullptr;

    for(int i = 0; i < players.size(); i++){
        int tempPlayerSum = getScore(players[i].openCards());
        if(tempPlayerSum > maxPoint){
                highestPlayer = players[i];
                maxPoint = tempPlayerSum;
            }
    }
    return highestPlayer;
    
}

int Rule::getScore(vector<Card> _cards){

}

 