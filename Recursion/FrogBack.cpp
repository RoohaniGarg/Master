#include <iostream>
#include <climits>
#include <cstring>
using namespace std;
const int N = 1e5;
int n;
int h[N] {};
int f(int x) {
	if (x == 1) {
		return 0;
	}
	int opt1 = f(x - 1) + abs(h[x] - h[x - 1]);
	int opt2 = INT_MAX;
	if (x - 2 >= 1) {
		opt2 = f(x - 2) + abs(h[x] - h[x - 2]);
	}
	int ans = min(opt1, opt2);
	return ans;
}
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> h[i];
	}
	int val = f(n);
	cout << val << endl;
	return 0;
}