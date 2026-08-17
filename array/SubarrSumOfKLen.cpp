#include <iostream>
using namespace std;
int main() {
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int x = 0;
	for (int i = 0; i <= n - k; i++) {
		int sum = 0;
		for (int j = i; j < i + k; j++) {
			sum += a[j];
		}
		if (sum > x) {
			x = sum;
		}
	}
	cout << x << endl;
	return 0;
}