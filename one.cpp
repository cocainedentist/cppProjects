#include <iostream>

using namespace std;

int main() {
	int result1 = 0;
	int result2 = 0;

	for (int i = 1; i <= 100; i++) result1 += i;
	for (int i = 3; i <= 100; i = i+3) result2 += i;

	cout << "1부터 100까지의 합 : " << result1 << endl;
	cout << "1부터 100까지 3의 배수 합 : " << result2 << endl;
}