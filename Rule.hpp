#ifndef RULE_H
#define RULE_H

#include <iostream>
#include <vector>

#include "Player.hpp"

class Rule{
protected:
    int getScore(vector<Card> _cards);
public:
    Player getWinner(vector<Player> players);
};

#endif