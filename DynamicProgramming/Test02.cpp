#include <iostream>
#include <climits>
#include <cstring>
using namespace std;
const int N = 1e2 + 2;
int n, m;
int c[N][N] {};
int dp1[N][N] {}, dp2[N][N] {}, dp3[N][N] {}, dp4[N][N] {};

int main() {

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> c[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}