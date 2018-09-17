#include "pch.h"
#include "Dice.h"
#include <cstdlib>
#include <ctime>

int Dice::throwDice() 
{
	int dieNumber = (rand() % 6 + 1);
	return dieNumber;
}

Dice::Dice()
{
	srand(time(0));
}


Dice::~Dice()
{
}
