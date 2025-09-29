#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

#define MX 5
#define MY 5

char PlayerShape = 'P';
char MonsterShape = 'M';
int PlayerX = 0;
int PlayerY = 0;
int MonsterX = MX;
int MonsterY = MY;

int PlayerInput;
bool IsPlay = true;

void playerMove()
{
	PlayerInput = _getch();

	if (PlayerInput == 'w')
	{
		--PlayerY;
	}
	else if (PlayerInput == 's')
	{
		++PlayerY;
	}
	else if (PlayerInput == 'a')
	{
		--PlayerX;
	}
	else if (PlayerInput == 'd')
	{
		++PlayerX;
	}
	else if (PlayerInput == 'q')
	{
		IsPlay = false;
	}
}

void monsterMove()
{
	int MovePos = rand() % 5;

	if (MovePos == 1)
	{
		--MonsterY;
	}
	else if (MovePos == 2)
	{
		++MonsterY;
	}
	else if (MovePos == 3)
	{
		--MonsterX;
	}
	else if (MovePos == 4)
	{
		++MonsterX;
	}
}

void renderGame()
{
	system("cls");
	COORD MonsterPos = { MonsterX,MonsterY };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), MonsterPos);
	cout << MonsterShape << endl;

	COORD PlayerPos = { PlayerX,PlayerY };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), PlayerPos);
	cout << PlayerShape << endl;
}

int main()
{
	srand((unsigned int)time(NULL));
	renderGame();
	while (IsPlay)
	{
		playerMove();
		monsterMove();
		renderGame();
	}
	return 0;
}