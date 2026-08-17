#include <iostream>
#include <climits>
#include <cstring>
using namespace std;
const int N = 1e5 + 2;
int n;
int a[N] {}, b[N] {}, c[N] {};
int dp[N][3] {};
//dp[day][activity]=f(n,t):max happiness from day
//one to nth day where activity is t on nth day.
int f(int x) {
	if (x == 0) {
		return 0;
	}
	if (dp[])
	}


int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i] >> c[i] >> endl;
	}
	memset(dp, -1, sizeof(dp));
	cout << max({f(n, 1), f(n, 2), f(n, 3)}) << endl;
	return 0;
}