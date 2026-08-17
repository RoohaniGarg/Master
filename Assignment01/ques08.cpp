#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i + j <= n + 1) {
				cout << j << "\t";
			} else {
				cout << "*" << "\t";
			}
		}
		for (int j = n; j >= 1; j--) {
			if (i + j > n + 2) {
				cout << "*" << "\t";
			}
		}
		cout << endl;
	}
	return 0;
}