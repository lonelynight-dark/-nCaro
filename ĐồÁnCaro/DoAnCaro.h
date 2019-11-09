#pragma once
#define BOARD_SIZE 12// Size of the Board
#define LEFT  5 // Left coordinate of Board 
#define TOP 3  // Top coorrdinate of Board

extern "C" struct _POINT { int x, y, c; };// x : diaphragm degree  , y : bounce degree , c : flag
extern "C" _POINT _A[BOARD_SIZE][BOARD_SIZE];
extern "C" bool _TURN; // player 1 = true ; player 2 = false
extern "C" int _COMMAND;//Value input from user
extern "C" int _X, _Y;//Current position of cursor

int main();