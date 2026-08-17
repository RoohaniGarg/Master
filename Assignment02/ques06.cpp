#include <iostream>
using namespace std;


int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n + 1; i++) {
		for (int j = 1; j <= n + 1; j++) {
			if (j <= i) {
				cout << n - j + 1 << "\t";
			} else {
				cout << "\t";
			}
		}
		for (int j = 1; j <= n; j++) {
			if (i + j >= n + 1) {
				cout << j << "\t";
			} else {
				cout << "\t";
			}
		}
		cout << endl;
	}
	for (int i = 1; i <= n + 1; i++) {
		for (int j = 1; j <= n + 1; j++) {
			if (i + j <= n + 1) {
				cout << n - j + 1 << "\t";
			} else {
				cout << "\t";
			}
		}
		for (int j = 1; j <= n; j++) {
			if (j >= i) {
				cout << j << "\t";
			}
			else {
				cout << "\t";
			}
		}
		cout << endl;




	}
	return 0;


}