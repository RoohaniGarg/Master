#include <iostream>
#include <climits>
using namespace std;
long long int bananas(int *a, int n, int h) {
	int k = 0;
	int maxi = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (a[i] > maxi) {
			maxi = a[i];
		}
	}
	long long s = 1, e = maxi;
	long long ans = -1;
	while (s <= e) {
		long long int mid = (s + e) / 2;
		long long ch = 0;
		for (int j = 0; j < n; j++) {
			ch += ((a[j] + mid - 1) / mid);
		}
		if (ch <= h) {
			ans = mid;
			e = mid - 1;

		} else {
			s = mid + 1;
		}
	}
	return ans;
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