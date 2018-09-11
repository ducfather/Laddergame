#pragma once
#include "Position.h"

class Player
{
public:
	Player();
	Player(int, Position);
	~Player();

	int playerId;
	Position playerPos;

};

