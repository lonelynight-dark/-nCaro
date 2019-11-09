#include"Model.h"
#include"DoAnCaro.h"
#include <stdlib.h>

void ResetData()
{
	_POINT _A[BOARD_SIZE][BOARD_SIZE];
	for (int i = 0; i < BOARD_SIZE; i++)
		for (int j = 0; j < BOARD_SIZE; j++)
		{
			 _A[i][j].y = 2 * i + TOP + 1;
			_A[i][j].c = 0; // 0 if not marked . -1 if taken by player 1. 1 if taken by player 2
		}
	int _TURN = true; int _COMMAND = -1; // Set Turn and Default Key
	int _X = _A[0][0].x; int _Y = _A[0][0].y; // Set Default Coordinate
}

void GarbageCollect()
{
	//Clean resource if declared cursor variables
}
