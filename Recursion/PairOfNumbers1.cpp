#include <iostream>
#include <climits>
#include <cstring>
using namespace std;
int n;
int f(int x, int y) {

	if (x == 1 and y == 1) {
		return 0;
	}
	int op1 = 0, op2 = 0;
	if ((x - y) > 0) {
		op1 = 1 + f(x - y, y);
		return op1;
	}
	if ((y - x) > 0) {
		op2 = 1 + f(x, y - x);
		return op2;
	}
}
int solve() {
	int final = INT_MAX;
	if (n == 1) {
		return 0;
	}
	for (int i = 1; i < n; i++) {
		int ans = 1 + f(i, n - i);
		final = min(ans, final);

	}
	return final;
}
int main() {
	cin >> n;
	int val = solve();
	cout << val << endl;
	return 0;
}