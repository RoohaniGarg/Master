#include <iostream>
using namespace std;
int main() {
	int n;
	int t;
	cin >> n >> t;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int max = 0;
	for (int i = 0; i < n; i++) {
		int c = 0;
		int tc = 0;
		for (int j = i; j < n; j++) {
			tc += a[j];
			if (tc > t) {
				break;
			} else {
				c += 1;
			}
		}
		if (c > max) {
			max = c;
		}
	}
	cout << max << endl;
	return 0;
}