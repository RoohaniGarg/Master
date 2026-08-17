#include <iostream>
using namespace std;


int main() {

	int n;
	cin >> n;
	int r = 1;
	while (r <= n) {
		int c = 1;
		while (c <= n) {
			if (c <= r) {
				cout << c;
				c += 1;
			} else {
				cout << "*";
				c += 1;
			}
		}
		r += 1;
		cout << endl;
	}
	return 0;
}