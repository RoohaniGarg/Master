#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int x = (n + 1) / 2;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i <= x) {
				if (j > x - i + 1 and j < n - x + i) {
					cout << "\t";
				} else {
					cout << "*\t";
				}

			} else {
				if (j > i - x + 1 and j < n - i + x) {
					cout << "\t";
				} else {
					cout << "*\t";
				}
			}
		}
		cout << endl;
	}
	return 0;
}
