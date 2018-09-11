#include "pch.h"
#include "Player.h"


Player::Player()
{
}

Player::Player(int id, Position initialPos) {
	playerId = id;
	playerPos = initialPos;
}


Player::~Player()
{
}
