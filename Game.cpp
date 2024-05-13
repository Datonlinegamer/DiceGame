#include "Game.h"
#include "Dice.h"
#include <iostream>

Game::Game()
{
	delete Die;
}

Game::Game(int Players, int Sides, int Score)
{
	NumberOfPlayer = Players;
	TargetScore = Score;
	Die = new Dice(Sides);
}



void Game::PlayGame()
{
	int* Scores = new int[NumberOfPlayer] {0};
	int round = 1;
	while (true)
	{

		std::cout << "round" << round << ":" << std::endl;
		for (int i = 0; i < NumberOfPlayer; i++)
		{
			int rollResult = Die->roll();
			std::cout << "Player " << i + 1 << " rolls: " << rollResult << std::endl;
			Scores[i] += rollResult;
			std::cout << "Player " << i + 1 << " total score: " << Scores[i] << std::endl;

			if (Scores[i] >= TargetScore)
			{
				std::cout << "Player " << i + 1 << " wins!" << std::endl;
				delete[] Scores;
				return;
			}
		}
		std::cout << std::endl;
		round++;
	}
}

