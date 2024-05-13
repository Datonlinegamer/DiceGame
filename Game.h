#pragma once
class Dice;
class Game
{
public:
    Game(int Players, int Sides, int Score);
    Game();
    void PlayGame();
  	

private:
  Dice* Die;
  int NumberOfPlayer;
  int TargetScore;



};