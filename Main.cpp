#include "GameSim.h"
using namespace std;

int main(int argc, char* argv[]) {
    GameSim game;
    game.readInputs(argv[1], argv[2]);
    game.process();
}