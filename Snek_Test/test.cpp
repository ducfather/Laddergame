#include "pch.h"
#include "../Snek/Game.h"
#include "../Snek/Board.h"
#include "../Snek/Player.h"

TEST(MovingPlayer, movePlayerBy3) 
{
	Player p1;
	Board board;
	auto result = board.move(p1, 3);
	EXPECT_EQ(4, result);
	
}