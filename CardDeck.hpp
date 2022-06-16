#ifndef CARDDECK_H
#define CARDDECK_H

#include <iostream>
#include <vector>
#include <string>

#include "Card.hpp"

using namespace std;

class CardDeck {
private:
    vector<Card> cards;

public:
    CardDeck();
    vector<Card> generateCards();
    vector<Card> getCards();
    Card draw();

};


#endif