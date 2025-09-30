#include <iostream>

using namespace std;

int N = 0;
long long int X[2 ^ 18] = { 0, };
long long int ResultValue[2 ^ 18] = { 0, };

void Input()
{
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> X[i];
		// cout << X[i] << endl;
	} // 숫자까지 다 입력받고
}

void NPOT()
{
	int j = 0;
	for (int i = 0; i < N; ++i)
	{
		int a = 2;
		bool isTrue = true;

		while (isTrue)
		{
			if (a >= X[j])
			{
				ResultValue[j] = a;
				isTrue = false;
				++j;
			}
			else
			{
				a = a * 2;
			}
		}
	}
}

void Output()
{
	for (int i = 0; i < N; ++i)
	{
		ResultValue[i + 1] = ResultValue[i + 1] ^ ResultValue[i];
	}
	cout << "\n" << ResultValue[N];
}

int main()
{
	Input();
	NPOT();
	Output();
	
}