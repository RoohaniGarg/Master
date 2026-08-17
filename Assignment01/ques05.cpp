#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int x = 0, y = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i ; j++) {
			cout << x << "\t";
			int z = x + y;
			x = y;
			y = z;
		}
		cout << endl;
	}
	return 0;
}