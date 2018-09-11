#pragma once
#include "Player.h"
#include "Position.h"
#include<vector>

class Board
{
public:

	Position field[100];
	std::vector<Player> playerPool;
	
	Position move(Player&, int);
	void fillField();
	void placePlayers(int);
	Position getStartPos();

	Board();
	Board(int);
	~Board();
};



