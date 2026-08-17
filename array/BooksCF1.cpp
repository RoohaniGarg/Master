#include <iostream>
#include <climits>
using namespace std;
int main() {
	int n, t;
	cin >> n >> t;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = INT_MIN;
	int sp = 0, ep = 0;
	int tc = 0,
	for (; ep < n; ep++) {
		tc += a[ep];
		while (tc > t and sp < ep) {
			tc -= a[sp];
			sp++;
		}
		if (ep - sp + 1 > ans) {
			ans = ep - sp + 1;
		}
	}
	cout << ans;
	return 0;
}