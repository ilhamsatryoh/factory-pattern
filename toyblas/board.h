#pragma once
#include "tiles.h"
#include "rocket.h"
#include "tnt.h"
#include "tilefactory.h"
{

class board
{
private:
	tilesFactory  factory;
	tiles* board[15][20];
public:
	board();
	tiles* getTiles(int x, int y);
};

board::board()
{
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++) {
			if (i % 2 == 1)
				board[i][j] = factory.createTiles("R", i, j);
			else
				board[i][j] = factory.createTiles("T", i, j);
		}
}
tiles*board::getTiles(int x, int y)
{
	return board[x][y];
}