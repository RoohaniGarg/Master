#include <iostream>
using namespace std;


int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int suffix[n + 1];
	suffix[n - 1] = a[n - 1];
	for (int i = n - 2; i >= 0; i -= 1) {
		suffix[i] = suffix[i + 1] + a[i];
	}
	for (int i = 0; i < n; i++) {
		cout << suffix[i] << " ";
	}
	return 0;
}