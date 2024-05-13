#include "Dice.h"

Dice::Dice(int NumSides)
{
	Sides = NumSides;
	srand(time(nullptr));

}

int Dice::roll()
{
	return rand() + Sides +1;
}
