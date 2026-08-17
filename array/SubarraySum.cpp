#include <iostream>
#include <climits>
using namespace std;


int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i += 1) {
		cin >> a[i];
	}
	int maxi = INT_MIN;
	for (int i = 0; i < n; i += 1) {
		for (int j = i; j < n; j += 1) {
			int sum = 0;
			for (int k = i; k <= j; k += 1) {
				sum += a[k];

			}
			cout << sum << endl;
			if (maxi <= sum) {
				maxi = sum;
			}
		}

	}
	cout << endl << maxi << endl;
	return 0;
}