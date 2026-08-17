#include <iostream>
#include <climits>
#include <cstring>
using namespace std;
const int N = 1e5 + 2;
int n;
int h[N];
int dp[N] {}; //1d array as only one variable in function.
//computations: ~n
//dp[x]=f(x):xth stone se 1st stone pe jana hai.
int f(int x) {
	if (x == 1) {
		return 0;
	}
	if (dp[x] != -1) {
		return dp[x];
	}
	int op1 = f(x - 1) + abs(h[x] - h[x - 1]);
	int op2 = INT_MAX;
	if (x - 2 >= 1) {
		op2 = f(x - 2) + abs(h[x] - h[x - 2]);
	}
	int ans = min(op1, op2);
	dp[x] = ans; //storing in dp array.
	return ans;
}
int dp1[N] {};
int f1(int x) {
	dp1[1] = 0;
	for (int i = 2; i <= n; i++) {
		int op1 = dp1[i - 1] + abs(h[i] - h[i - 1]);
		int op2 = INT_MAX;
		if (i - 2 >= 1) {
			op2 = dp1[i - 2] + abs(h[i] - h[i - 2]);
		}
		dp1[i] = min(op1, op2);
	}
	return dp1[n];
}
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> h[i];
	}
	//initialising
	memset(dp, -1, sizeof(dp));
	cout << f(n) << endl;
	cout << f1(n) << endl;
	return 0;
}