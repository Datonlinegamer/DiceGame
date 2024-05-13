
#include "Game.h"
#include <iostream>

int main() {
    int numPlayers, targetScore, numSides;

    
    std::cout << "Enter the number of players: ";
    std::cin >> numPlayers;
    std::cout << "Enter the target score: ";
    std::cin >> targetScore;
    std::cout << "Enter the number of sides on the dice: ";
    std::cin >> numSides;

    Game game(numPlayers, targetScore, numSides);
    game.PlayGame();

    return 0;
}
