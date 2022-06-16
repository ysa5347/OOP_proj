#ifndef CARD_H
#define CARD_H

using namespace std;

class Pattern
{
    string value;
public:
    static const Pattern SPADE;
    static const Pattern HEART;
    static const Pattern DIAMOND;
    static const Pattern CLUB;

    vector <Pattern> values;
    Pattern(string value);
    string getValue();
};

class Denomination
{
    string mark;
    int point;
public:
    static const Denomination ACE;
    static const Denomination TWO;
    static const Denomination THREE;
    static const Denomination FOUR;
    static const Denomination FIVE;
    static const Denomination SIX;
    static const Denomination SEVEN;
    static const Denomination EIGHT;
    static const Denomination NINE;
    static const Denomination TEN;
    static const Denomination JACK;
    static const Denomination QUEEN;
    static const Denomination KING;

    vector <Denomination> values;
    Denomination(string mark, int point);
    string getMark();
    int getPoint();
};

class Card{
private:
    Pattern pattern;
    Denomination denomination;
public:
    Card(Pattern pattern, Denomination denomination);
    Pattern getPattern();
    Denomination getDenomination();
};



#endif