#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Card
{
private:
    Pattern pattern;
    Denomination denomination;
public:
    Card(Pattern pattern, Denomination denomination) {}

    Pattern getPattern() {
        return pattern;
    }

    Denomination getDenomination() {
        return denomination;
    }
};

class Pattern
{
    string value;
public:
    static const Pattern SPADE;
    static const Pattern HEART;
    static const Pattern DIAMOND;
    static const Pattern CLUB;

    vector <Pattern> values = { SPADE, HEART, DIAMOND, CLUB };

    Pattern(string value)
    {
        this->value = value;
    }

    string getValue()
    {
        return this->value;
    }

};

static const Pattern::SPADE = Pattern("spade");
static const Pattern::HEART = Pattern("heart");
static const Pattern::DIAMOND = Pattern("diamond");
static const Pattern::CLUB = Pattern("club");

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

    vector <Denomination> values = { ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, SEIGHT, NINE, TEN, JACK, QUEEN, KING };

    Denomination(striing mark, int point)
    {
        this->mark = mark;
        this->point = point;
    }

    string getMark()
    {
        return this->mark;
    }

    int getPoint()
    {
        return this->point;
    }
};

static const Denomination::ACE = Denomination("A", 1);
static const Denomination::TWO = Denomination("2", 2);
static const Denomination::THREE = Denomination("3", 3);
static const Denomination::FOUR = Denomination("4", 4);
static const Denomination::FIVE = Denomination("5", 5);
static const Denomination::SIX = Denomination("6", 6);
static const Denomination::SEVEN = Denomination("7", 7);
static const Denomination::EIGHT = Denomination("8", 8);
static const Denomination::NINE = Denomination("9", 9);
static const Denomination::TEN = Denomination("10", 10);
static const Denomination::JACK = Denomination("J", 10);
static const Denomination::QUEEN = Denomination("Q", 10);
static const Denomination::KING = Denomination("K", 10);