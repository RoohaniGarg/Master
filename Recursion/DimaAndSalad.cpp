#include <iostream>
#include <climits>
#include <cstring>
using namespace std;
int n, k;
int a[100];
int b[100];
int f(int x, int s) {
	if (x == n) {
		if (s == 0) {
			return 0;
		} else {
			return -1e7;
		}
	}
	int op1 = a[x] + f(x + 1, s + (a[x] - k * b[x]));
	int op2 = f(x + 1, s);
	int ans = max(op1, op2);
	return ans;
}
int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	int ans = f(0, 0);
	if (ans <= 0) {
		cout << "-1";
	} else {
		cout << ans << endl;
	}
	return 0;
}