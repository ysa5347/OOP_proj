#include <iostream>
#include <string>
#include <vector>
using namespace std;

enum class Pattern
{
// private:
//     string value;
// public:
//     Pattern() {}
//     Pattern(string value)
//     {
//         this.value = value;
//     }
    SPADE = 'spade',
    HEART = 'heart',
    DIAMOND = 'diamond',
    CLUB = 'club'
};

enum class Denomination
{
// private:
//     string mark;
//     int point;
// public:
//     Denomination() {}
//     Denomination(string mark, int point)
//     {
//         this.mark = mark;
//         this.point = point;
//     }
//     int getPoint()
//     {
//         return this.point;
//     }
    A = 1,
    J = 10,
    Q = 10,
    K = 10
};

class Card 
{
private:
    Pattern pattern;
    Denomination denomination;
public:
    Card(Pattern pattern, Denomination denomination) {}

        // this.pattern = pattern;
        // this.denomination = denomination;

    Pattern getPattern() {
        return pattern;
    }

    void setPattern(Pattern pattern) {}
        // this.pattern = pattern;
    

    Denomination getDenomination() {
        return denomination;
    }

    void setDenomination(Denomination denomination) {}
        // this.denomination = denomination;
    

    virtual void toString() {
        cout << "pattern=" << pattern << ", denomination=" << denomination << endl;
    }

    // enum class Pattern 
    // {
    //     SPADE = 'spade',
    //     HEART = 'heart',
    //     DIAMOND = 'diamond',
    //     CLUB = 'club';
    // }

    // enum class Denomination {
    //     A = 1,
    //     J = 10,
    //     Q = 10,
    //     K = 10;
    // }
};