#include <iostream>
#include <climits>
using namespace std;
#define int long long
int32_t main() {
	int n, m;
	cin >> n >> m;
	if (n <= m) {
		cout << n << endl;
		return 0;
	}
	int s = 1;
	int e = 1e9;
	int ans = 0;
	while (s <= e) {
		int mid = (s + e) / 2;
		if ((mid * (mid + 1)) / 2 >= n - m) {
			ans = mid;
			e = mid - 1;
		} else {
			s = mid + 1;
		}

	}
	cout << m + ans << endl;
	return 0;
}