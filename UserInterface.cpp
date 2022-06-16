#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

#include "UserInterface.h"

using namespace std;

void UserInterface::initMsg(){
    cout << "\n\n\n\n\n\n\n" << endl;
    cout << setw(50) << internal << "Black Jack" << endl;
    cout << setw(50) << internal << "press \"Enter key\" to continue" << endl;
    cout << "\n\n\n\n\n\n\n" << endl;
    char c;
    cin >> c;
    while(c != 13)
        cin >> c;
    
}

vector<string> UserInterface::getUserName(){
    vector<string> Name;
    string temp;

    for(int i = 1; i <= 3; i++){
        cout << "Please type your name(" << i << "/3) : ";
        cin >> temp;
        Name.push_back(temp);
        cout << temp << ", welcome." << endl;
    }

    return Name;
}