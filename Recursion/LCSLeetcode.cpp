#include <iostream>
#include <climits>
#include <cstring>
using namespace std;
class Solution {
public:
	int f(string &s, string &t, int x, int y) {
		//stopping point
		if (x < 0 or y < 0) {
			return 0;
		}
		if (s[x] == t[y]) {
			int ans = 1 + f(s, t, x - 1, y - 1);
			return ans;
		} else {
			int op1 = f(s, t, x - 1, y);
			int op2 = f(s, t, x, y - 1);
			return max(op1, op2);
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
	cout << st.longestCommonSubsequence(s, t);
	return 0;
}