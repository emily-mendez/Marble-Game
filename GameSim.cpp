#include "GameSim.h"
using namespace std;

void GameSim::readInputs(string gates, string inputStr) {
    for(int i = 0; i < gates.length(); i++) {
        X[i + 1] = gates[i];
    }
    for(int i = 0; i < inputStr.length(); i++) {
        inputs.push(inputStr[i] - '0');
    }
}

void GameSim::process() {
    int currGate = 1; 
    int X1index = 0; // Always set first gate to 'L' for first marble
    int currInput;
    while(!inputs.empty()) {
        // print gate directions for each input
        for(int i = 1; i < X.size() + 1; i++) cout << X.at(i);
        cout << "->";

        // process input at X1
        currInput = inputs.front();
        inputs.pop();
        currGate = X1index + 2; // update next gate before changing index
        if(currInput == 0) X1index--; // if input = 0 shift X1 to the left
        else X1index++; // if input = 1 shift X1 to the right
        X1index = (X1index % 3 + 3) % 3; // wrap state vector if necessary to get the correct updated state index
        X[1] = X1states[X1index]; // update value in X1

        // process input at either X2, X3, or X4
        if(inputs.empty()) {
            if(currGate == 2 && X[2] == 'L') finalState = 'B';
            else if(currGate == 4 && X[4] == 'R') finalState = 'E';
            else if((currGate == 2 && X[2] == 'R') || (currGate == 3 && X[3] == 'L')) finalState = 'C';
            else finalState = 'D';
        }
        X[currGate] = (X[currGate] == 'L') ? 'R' : 'L';
    }
    //print gate directions after last iteration of loop and final state
    for(int i = 1; i < X.size() + 1; i++) cout << X.at(i);
    cout << " " << finalState << endl; 
}