#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#include "Card.hpp"
#include "CardDeck.hpp"

using namespace std;

class CardDeck {
private:
    vector<Card> cards;

public:
    CardDeck() {
        cards = generateCards();
        random_shuffle(cards.begin(), cards.end());
    }

    vector<Card> generateCards() {

        for (int i = 0; i < Pattern::values.size(); i++) 
        {
            for (int j = 0; j < Denomination::values.size(); j++) 
            {
                Card card = new Card(Pattern::values[i], Denomination::values[j]);
                cards.push_back(card);
            }
        }
        return cards;
    }

    vector<Card> getCards() {
        return cards;
    }

    Card draw() {
        temp = cards.back();
        cards.pop_back();
        return temp;
    }

}