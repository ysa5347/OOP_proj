#ifndef RULE_H
#define RULE_H

class Rule{
    int getScore(vector<Card> _cards);
public:
    Player getWinner(vector<Player> players);
};

#endif