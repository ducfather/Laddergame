#include "pch.h"
#include <iostream>
#include "Game.h"
#include "Player.h"
#include "Board.h"

int main()
{
	Board board(2);

	board.move(board.playerPool[0], 3);

	auto result = board.playerPool[0].playerPos.posId;
	std::cout << result << std::endl;



	system("pause");
}



