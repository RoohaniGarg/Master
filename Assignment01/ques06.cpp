#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j <= i) {
				cout << j << "\t";
			} else {
				cout << "\t";
			}
		}
		for (int j = n - 1; j >= 1 ; j--) {
			if (j <= i) {
				cout << j << "\t";
			} else {
				cout << "\t";
			}
		}
		cout << endl;
	}
	return 0;
}