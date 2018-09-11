#include "pch.h"
#include "Board.h"


Board::Board() {}

Board::Board(int numberOfPlayers)
{
	fillField();
	placePlayers(numberOfPlayers);
}



Board::~Board()
{
}

Position Board::move(Player &player, int steps) {
	
	auto currentPlayer = player;
	auto oldPosition = player.playerPos.posId;
	player.playerPos =  field[oldPosition + steps-1];
	return currentPlayer.playerPos;
}



void Board::placePlayers(int numberOfPlayers) {
	for (int i = 0; i < numberOfPlayers; i++) {
		playerPool.push_back(Player(i + 1, getStartPos()));
	}
}


Position Board::getStartPos() {
	return field[0];
}

void Board::fillField() 
{
	for (int i = 0; i < 100; i++) {
		field[i] = Position(i + 1);
	}
}