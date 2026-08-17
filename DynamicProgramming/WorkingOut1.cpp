#include <iostream>
#include <climits>
#include <cstring>
using namespace std;
const int N = 1e3 + 2;
int n, m;
int c[N][N] {};
int dp1[N][N] {}, dp2[N][N] {}, dp3[N][N] {}, dp4[N][N] {};
int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; i <= m; j++) {
			cin >> c[i][j];
		}
	}
	//filling the dp1 array
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (i == 1 and j == 1) {
				dp1[i][j] = c[i][j];
			} else if (i == 1) {
				dp1[i][j] = dp1[i][j - 1] + c[i][j];
			} else if (j == 1) {
				dp1[i][j] = dp1[i - 1][j] + c[i][j];
			} else {
				dp1[i][j] = max(dp1[i - 1][j], dp1[i][j - 1]) + c[i][j];
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; i <= m; j++) {
			cout << dp1[i][j];
		}
		cout << endl;
	}
	return 0;
}