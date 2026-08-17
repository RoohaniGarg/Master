#include <iostream>
#include <climits>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 1e3;
int n, m;
int a[N][N] {};
int dp[N][N] {};
int f(int x, int y) {
	if (x == 1 and y == 1) {
		return a[1][1];
	}
	if (dp[x][y] != -1) {
		return dp[x][y];
	}
	int op1 = INT_MIN, op2 = INT_MIN;
	if (x - 1 > 0) {
		op1 = f(x - 1, y) + a[x][y];
	}
	if (y - 1 > 0) {
		op2 = f(x, y - 1) + a[x][y];
	}
	//int op1=f(x-1,y)+a[x][y];
	//int op2=f(x,y-1)+a[x][y];
	int ans = max(op1, op2);
	dp[x][y] = ans;
	return ans;
}
int dp1[N][N];
int f1(int x, int y) {
	if (x == n and y == m) {
		return a[x][y];
	}
	if (dp1[x][y] != -1) {
		return dp1[x][y];
	}
	int op1 = INT_MIN, op2 = INT_MIN;
	if (x + 1 <= n) {
		op1 = f1(x + 1, y) + a[x][y];
	}
	if (y + 1 <= m) {
		op2 = f1(x, y + 1) + a[x][y];
	}
	//op1=f(x+1,y)+a[x][y];
	//op2=f(x,y+1)+a[x][y];
	int ans = max(op1, op2);
	dp1[x][y] = ans;
	return ans;

}
int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
	memset(dp, -1, sizeof(dp));
	memset(dp1, -1, sizeof(dp1));
	//recursion from front
	cout << f1(1, 1) << endl;
	//recursion from back
	cout << f(n, m) << endl;
	return 0;
}