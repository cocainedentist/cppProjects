#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

char playerShape = 'P';
int playerX = 0;
int playerY = 0;

int playerInput;
bool isPlay = true;

void playerMove()
{
	playerInput = _getch();

	if (playerInput == 'w')
	{
		--playerY;
	}
	else if (playerInput == 's')
	{
		++playerY;
	}
	else if (playerInput == 'a')
	{
		--playerX;
	}
	else if (playerInput == 'd')
	{
		++playerX;
	}
	else if (playerInput == 'q')
	{
		isPlay = false;
	}
}

void renderGame()
{
	system("cls");
	COORD pos = { playerX,playerY };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	cout << playerShape << endl;
}

int main()
{
	renderGame();
	while (isPlay)
	{
		playerMove();
		renderGame();
	}
	return 0;
}