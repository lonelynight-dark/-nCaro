#include"DoAnCaro.h"
#include"View.h"
#include<Windows.h>
#include<stdio.h>
#include<conio.h>
_POINT _A[BOARD_SIZE][BOARD_SIZE];
bool _TURN;
int _COMMAND;
int _X, _Y;


void FixConsoleWindow()
{
	HWND consoleWindow = GetConsoleWindow();
	LONG style = GetWindowLong(consoleWindow, GWL_STYLE);
	style = style & ~(WS_MAXIMIZEBOX) & ~(WS_THICKFRAME);
	SetWindowLong(consoleWindow, GWL_STYLE, style);
}

void GotoXY(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

extern void DrawBoard(int pSize)
{
	for (int i = 0; i < pSize; i++)
		for (int j = 0; j < pSize; j++)
		{
			GotoXY(LEFT + 4 * i,TOP + 2 * j);
			printf(".");
		}
}

int ProcessFinish(int pWhoWin)
{
	GotoXY(0, _A[BOARD_SIZE - 1][BOARD_SIZE - 1].y + 2);
	switch (pWhoWin)
	{
		case 1:  printf("Nguoi choi 1 thang"); break;
		case -1: printf("Nguoi choi 2 thang"); break;
		case 0:  printf("Nguoi choi 1 va 2 hoa"); break;
		case 2:  _TURN = !_TURN;//Change the player if nothing happens
	}
	GotoXY(_X, _Y);
	return pWhoWin;
}

int AskContinue()
{
	GotoXY(0, _A[BOARD_SIZE - 1][BOARD_SIZE - 1].y + 4);
	printf("Nhan Y/N de tiep tuc hoac dung: ");
	return toupper(_getch());
}