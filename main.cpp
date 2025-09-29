#include <iostream> //cpp standard
#include <conio.h> //c standard

using namespace std;

bool bIsRunning = true;

int PlayerX = 0;
int PlayerY = 0;
char PlayerShape = 'P';
int KeyCode;

void Input()
{
	KeyCode = _getch();
	return;
}

void Process()
{
	if (KeyCode == 'w')
	{
		PlayerY--;
	}
	else if (KeyCode == 's')
	{
		PlayerY++;
	}
	else if (KeyCode == 'a')
	{
		PlayerX--;
	}
	else if (KeyCode == 'd')
	{
		PlayerX++;
	}
	else if (KeyCode == 'q')
	{
		bIsRunning = false;
	}
}

void Render()
{
	system("cls");
	for (int Y = 0; Y < 100; ++Y)
	{
		for (int X = 0; X < 100; ++X)
		{
			if (PlayerX == X && PlayerY == Y)
			{
				cout << PlayerShape;
				break;
			}
			else
			{
				cout << ' ';
			}
		}
		if (PlayerY == Y)
		{
			break;
		}
		cout << endl;
	}
}

int main()
{
	//frame, deltaseconds
	Render();
	while (bIsRunning)
	{
		Input();
		Process();
		Render();
	}

	return 0;
}