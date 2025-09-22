#include <iostream>

using namespace std;

int main()
{
	int count = 0;
	cin >> count;
	
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			if (i > j) {
				cout << " ";
			}
			else
			{
				cout << "*";
			}
		}
		cout << endl;
	}

	return 0;
}