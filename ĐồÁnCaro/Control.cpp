#include"Control.h"
#include <stdlib.h>
#include "Model.h"
#include "DoAnCaro.h"
#include "View.h"

void StartGame()
{
	system("cls");
	ResetData();
	DrawBoard(BOARD_SIZE);
}


void EndGame()
{
	system("cls");
	GarbageCollect();
	//Save game before exit
}