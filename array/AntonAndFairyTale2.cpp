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
	for (int k = 1; k <= e; k++) {
		if ((k * (k + 1)) / 2 >= (n - m)) {
			ans = k;
			break;
		}
	}
	cout << m + ans << endl;
	return 0;
}