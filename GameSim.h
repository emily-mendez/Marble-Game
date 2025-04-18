#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

class GameSim {
public:
    void readInputs(string gateDirections, string input);
    void process();
private:
    char finalState;
    queue<int> inputs;
    unordered_map<int, char> X;
    vector<char> X1states = {'L', 'C', 'R'};
};