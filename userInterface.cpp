//
// Created by natha on 13/12/2022.
//
#include <string>
#include <iostream>
#include <limits>
#include "userInterface.h"
using namespace std;
unsigned userInput(const unsigned min, const unsigned max, const string& inputMsg)
{
    unsigned userInput = 0;

    do {
        cout << inputMsg;

        cin >> userInput;
        if(!cin){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

    }while(userInput < min || userInput >  max || !cin);

    return userInput;
}