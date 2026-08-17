#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i += 1) {
		for (int j = 1; j <= n; j += 1) {
			if (j < i) {
				cout << i << " ";
			} else {
				cout << j << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
