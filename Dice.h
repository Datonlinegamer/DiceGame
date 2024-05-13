#pragma once
#include <cstdlib> 
#include <ctime>

class Dice
{
public:
	Dice(int NumSides);
	int roll();
private:
	int Sides;
		
};