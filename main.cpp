// preprocessor
#include <iostream> // no h = cpp standard
#include <conio.h> // .h = c standard

using namespace std;

// Load Level
int world[10][10] = {
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

bool bIsRunning = true;
int playerX = 1;
int playerY = 1;
char playerShape = 'P';

// 사상 (Mapping)
char sprites[10] = { ' ', '*', };

int keyCode;

void Input()
{
	// Input
	keyCode = _getch();
	return;
}

void Process()
{
	// Process
	if (keyCode == 'w')
	{
		if (world[playerY-1][playerX] != 1)
		{
			playerY--;
		}
	}
	else if (keyCode == 's')
	{
		if (world[playerY + 1][playerX] != 1)
		{
			playerY++;
		}
	}
	else if (keyCode == 'a')
	{
		if (world[playerY][playerX - 1] != 1)
		{
			playerX--;
		}
	}
	else if (keyCode == 'd')
	{
		if (world[playerY][playerX+1] != 1)
		{
			playerX++;
		}
	}
	else if (keyCode == 'q')
	{
		bIsRunning = false;
	}
}

void Render()
{
	// Render();
	system("cls");
	for (int y = 0; y < 10; ++y)
	{
		for (int x = 0; x < 10; ++x)
		{
			if (playerX == x && playerY == y)
			{
				cout << playerShape;
			}
			else
			{
				cout << sprites[world[y][x]];
			}
		}
		cout << endl;
	}
}

int main()
{
	// STL Search Sort Algorithm
	// 제공
	// Container
	// 자료구조 -> Data Structure(배열, index int) -> Map(인덱스 아무거나)
	// 가변 크기 배열 -> Vector

	// frame, deltaseconds
	while (bIsRunning)
	{
		Input();
		Process();
		Render();
	}
}