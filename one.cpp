#include <iostream>

using namespace std;

int main() {
	int result1 = 0;
	int result2 = 0;

	for (int i = 1; i <= 100; i++) result1 += i;
	for (int i = 1; i <= 100; i++) if (i % 3 == 0) result2 += i;

	cout << "1���� 100������ �� : " << result1 << endl;
	cout << "1���� 100���� 3�� ��� �� : " << result2 << endl;
}