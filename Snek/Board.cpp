#include "pch.h"
#include "Board.h"


Board::Board() {}

Board::Board(int numberOfPlayers)
{
	fillField();
	placePlayers(numberOfPlayers);
	initializeDice();
}

Board::~Board()
{
}

void Board::initializeDice()
{
	Dice die;
	dice = die;
}


Position Board::move(Player &player, int steps) {
	
	int oldPositionVal = player.playerPos.posId;


	player.playerPos =  field[oldPositionVal + steps-1];



	return player.playerPos;
}

Position Board::moveByDice(Player &player) {

	int dieNumber = dice.throwDice();
	return move(player, dieNumber);
}


void Board::placePlayers(int numberOfPlayers) {
	for (int i = 0; i < numberOfPlayers; i++) {
		playerPool.push_back(Player(i + 1, getStartPos()));
	}
}

Position Board::getStartPos() {
	return field[0];
}

Position Board::getLastPos() {

	return field[100];
}

void Board::fillField() 
{
	for (int i = 0; i < 100; i++) {
		field[i] = Position(i + 1);
	}
}