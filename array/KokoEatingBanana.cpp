#include <iostream>
#include <climits>
using namespace std;
int bananas(int *a, int n, int h) {
	int k = 0;
	int maxi = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (a[i] > maxi) {
			maxi = a[i];
		}
	}
	for (int k = 1; k <= maxi; k++) {
		int ch = 0;
		for (int j = 0; j < n; j++) {
			ch += ((a[j] + k - 1) / k);
		}
		if (ch <= h) {
			return k;
		}
	}
	return -1;
}
int main() {
	int n, h;
	cin >> n >> h;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << bananas(a, n, h) << endl;
	return 0;
}