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

int main(){
    UserInterface UI;
    vector<Gamer> gamers;
    Game game1;
    
    UI.initMsg();
    vector<string> names = UI.getUserName();
    
    for(int i = 0; i < 3; i++){
        string tempName = names.pop_back();
        Gamer tempGamer(tempName);
        gamers.push_back(tempGamer);
    }


    return 0;
}