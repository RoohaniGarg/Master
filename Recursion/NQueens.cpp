#include <iostream>
#include <climits>
#include <cstring>
#include <vector>
#include <string>
using namespace std;
bool canplace(int &row, int &col, vector<string>&current, int n) {
	for (int x = 0; x < n; x++) {
		if (current[x][col] == 'Q') {
			return false;
		}
	}
	for (int y = 0; y < n; y++) {
		if (current[row][y] == 'Q') {
			return false;
		}
	}
	while (row >= 0 and col >= 0) {
		if (current[row][col] == 'Q') {
			return false;
		}
		row--, col--;
	}
	while (row >= 0 and col < n) {
		if (current[row][col] == 'Q') {
			return false;
		}
		row--, col++;
	}
	return true;
}
bool f(int row, vector<vector<string>>&ans, vector<string>&current, int n) {
	//stopping point
	if (row == n) {
		ans.push_back(current);
		return false; //false as we need all answers not just 1
		//return true; if only 1 soln was required
	}
	for (int col = 0; col < n; col++) {
		if (canplace(row, col, current, n) == 1) {
			current[row][col] = 'Q';
			bool smallans = f(row + 1, ans, current, n);
			//this block will never work as upar return false kr rkha hai
			//ye tb kaam aata when single ans was req
			if (smallans == 1) {
				return true;
			}
			//backtracking
			current[row][col] = '.';
		}
	}
	return false;

}
vector<vector<string>> solveNQueens(int n) {
	vector<vector<string>>ans;
	vector<string> current(n, "");
	string s(n, '.');
	for (int i = 0; i < n; i++) {
		current[i] = s; //current ki har string me dot dot bhar diya.
	}
	bool useless = f(0, ans, current, n);
	return ans;
}
void printusingforloop(vector<vector<string>>&ans) {
	for (int i = 0; i < ans.size(); i++) {
		for (int j = 0; j < ans[i].size(); j++) {
			cout << ans[i][j] << endl;
		}
		cout << endl;
	}
	cout << endl << "---------------------- " << endl;
}
void printusingforeachloop(vector<vector<string>>&ans) {
	for (vector<string> x : ans) {
		for (string y : x) {
			cout << y << endl;
		}
		cout << endl;
	}
	cout << endl << "-------------------------" << endl;
}
int main() {
	int n;
	cin >> n;
	vector<vector<string>> ans = solveNQueens(0);
	if (ans.size() == 0) {
		cout << "no solution found" << endl;
	}
	cout << ans.size() << endl;

	printusingforloop(ans);
	printusingforeachloop(ans);

	return 0;
}