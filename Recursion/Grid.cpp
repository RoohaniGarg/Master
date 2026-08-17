#include <iostream>
#include <climits>
#include <cstring>
using namespace std;
const int N = 1e3 + 1;
int n, m;
int mod = 10000007;
char grid[N][N];
void input() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> grid[i][j];
		}
	}
}
int f(int x, int y) {
	if (x == n and y == m) {
		return 1;
	}
	if (grid[x][y] == '#') {
		return 0;
	}
	int op1 = 0, op2 = 0;
	if (y + 1 <= m) {
		op1 = f(x, y + 1);
		op1 %= mod;
	}
	if (x + 1 <= n) {
		op2 = f(x + 1, y);
		op2 %= mod;
	}
	int ans = (op1 + op2) % mod;
	return ans;
}
int main() {
	cin >> n >> m;
	input();
	cout << f(1, 1);
	return 0;
}