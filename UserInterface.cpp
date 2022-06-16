#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <random>
#include <time.h>

#include "UserInterface.hpp"

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

void UserInterface::welcomeMsg(){
    char c;
    cout << "\n\n\n\n\n\n\n" << endl;
    cout << setw(50) << internal << "Welcome!" << endl;
    cout << setw(50) << internal << "press any key to continue." << endl;
    cout << "\n\n\n\n\n\n\n" << endl;
    cin >> c;
}

void UserInterface::shuffling(){
    char c;
    cout << "\n\n\n\n\n\n\n" << endl;
    cout << setw(50) << internal << "Shuffling..." << endl;
    cout << "\n\n\n";
    int i = 0;
    while(i <= 100){
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<int> dis(0, 10);
        if(dis(gen) > 5){
            i += 2;
            cout << char(119);
        }
    }
    cout << "\n\n\n\n\n\n\n" << endl;
}

void UserInterface::startMsg(){
    cout << "\n\n\n\n\n\n\n" << endl;
    cout << setw(50) << internal << "Game Start!" << endl;
    cout << "\n\n\n\n\n\n\n" << endl;
}