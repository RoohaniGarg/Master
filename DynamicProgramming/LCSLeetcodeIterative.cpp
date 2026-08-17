#include <iostream>
#include <climits>
#include <cstring>
using namespace std;
int dp[1001][1001] {};




class Solution {
public:
// Recursion + Memoisation :
// dp[x][y] = F(x,y): Length of LCS in string S from
//n-1 to 0 and m-1 to 0 in string T
	int f(string &s, string &t, int x, int y) {
		dp[0][0] = 0;
		for (int i = 0; i < n; i++) {
			dp[i][0] = 0;
		}
		for (int j = 0; j < n; j++) {
			dp[0][j] = 0;
		}
	}
	int longestCommonSubsequence(string s, string t) {
		int n = s.length();
		int m = t.length();

		return f(s, t, n - 1, m - 1);
	}
};
int main() {
	string s, t;
	cin >> s >> t;
	Solution st;
	int length = st.longestCommonSubsequence(s, t);
	cout << st.getLCS(s, t, length) << endl;
	return 0;
}