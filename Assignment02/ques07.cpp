#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	int n = 2 * a - 1;
	int x = (n + 1) / 2;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i <= x) {
				if (j > x - i + 1 and j < n - x + i) {
					cout << " ";
				} else {
					cout << "*";
				}

			} else {
				if (j > i - x + 1 and j < n - i + x) {
					cout << " ";
				} else {
					cout << "*";
				}
			}
		}
		cout << endl;
	}
	return 0;
}