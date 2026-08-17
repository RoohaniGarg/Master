#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= (n - i); j++) {
			cout << "\t";
		}
		int x = i;
		for (int j = 0 ; j < i; j++) {
			cout << x << "\t";
			x += 1;
		}
		x -= 2;
		for (int j = 1; j < i; j++) {
			cout << x << "\t";
			x -= 1;
		}
		cout << endl;
	}
	return 0;
}