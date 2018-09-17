#pragma once
#include "Player.h"
#include "Position.h"
#include "Dice.h"
#include <vector>


class Board
{
public:

	Position field[100];
	std::vector<Player> playerPool;
	
	Dice dice;
	void initializeDice();

	Position move(Player&, int);
	Position moveByDice(Player&);

	void fillField();
	void placePlayers(int);
	Position getStartPos();
	Position getLastPos();

	Board();
	Board(int);
	~Board();

};



