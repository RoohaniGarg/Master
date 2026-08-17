#include <iostream>
#include <climits>
#include <cstring>
#include <iomanip>
using namespace std;
const int N = 1e5 + 2;
int dp[N] {};
//dp[n]=f(n):nth fibonacci
//top down dp: recursion + memoisation
//computations: no. of unique states*transition time=n*1
int f(int x) {
	if (x == 1 or x == 0) {
		return x;
		dp[x] = x;
	}
	//current state:f(x)
	if (dp[x] != -1) {
		return dp[x];
	}
	int ans = f(x - 1) + f(x - 2);
	//storing the ans in dp array before returning
	dp[x] = ans;
	return ans;
}
int dp1[N] {};
int f1(int n) {
	dp1[0] = 0;
	dp1[1] = 1;
	for (int i = 2; i <= n; i++) {
		dp1[i] = dp1[i - 1] + dp1[i - 2];
	}
	return dp1[n];
}
int main() {
	int n;
	cin >> n;
	//initializing dp array with -1.
	memset(dp, -1, sizeof(dp));
	//can do this manually using loop too
	cout << f(n) << endl;
	cout << f1(n);
	return 0;
}