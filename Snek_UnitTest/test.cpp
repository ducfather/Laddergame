#include "pch.h"
#include "../Snek/Game.h"
#include "../Snek/Board.h"
#include "../Snek/Player.h"
#include "../Snek/Position.h"
#include "../Snek/Dice.h"


TEST(InitializeGame, startGame) 
{
	Board board(1);
	int result = board.playerPool[0].playerPos.posId;
	EXPECT_EQ(1, result);
}


TEST(MovingPlayer, moveBy3)
{
	Board board(2);
	Player p1 = board.playerPool[0];
	Position result = board.move(p1, 3);
	EXPECT_EQ(4, result.posId);
}


TEST(MovingPlayer, moveBy3And4) 
{
	Board board(2);
	Player p1 = board.playerPool[0];
	board.move(p1, 3);
	Position result = board.move(p1, 4);
	EXPECT_EQ(8, result.posId);
}

TEST(MovingPlayer, playerWins) {

	Board board(2);
	Player p1 = board.playerPool[0];
	board.move(p1, 96);
	board.move(p1, 3);
	
}


TEST(MovingPlayer, moveByDice)
{
	//tbc...
}

TEST(DiceThrow, throwDice)
{
	Dice die;
	int result = die.throwDice();
	EXPECT_TRUE((result > 1) && (result < 6));
}

