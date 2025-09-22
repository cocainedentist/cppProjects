#include <iostream>

using namespace std;

int main() {
	int num[10] = { 0, };

	for (int i = 6; i > 0; --i) {
		for (int j = 6; j > 0; --j) {
			if (i <= j) cout << " ";
			else cout << "*";
		}
		cout << endl;
	}

	return 0;
}