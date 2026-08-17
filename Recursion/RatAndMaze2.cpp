#include <iostream>
#include <climits>
#include <cstring>
using namespace std;
int n, m;
char maze[1001][1001];
int visited[1001][1001] {};
int solution[1001][1001] {};
bool f(int x, int y) {
	if (x == n and y == m) {
		solution[x][y] = 1;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				cout << solution[i][j] << " ";
			}
			cout << endl;
		}
		return true;
	}
	//if (visited[x][y] != 0) {
	//return false;
	//}
	//visited[x][y] == 1;
	solution[x][y] == 1;
	if (y + 1 <= m) {
		bool rightans = f(x, y + 1);
		if (rightans == 1) {
			return true;
		}
	}
	if (x + 1 <= n) {
		bool downans = f(x + 1, y);
		if (downans == 1) {
			return true;
		}
	}
	solution[x][y] = 0;
	return false;
}
int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> maze[i][j];
			if (maze[i][j] == 'X') {
				visited[i][j] = 1;
			}
		}
	}
	bool ans = f(1, 1);
	if (ans == 0) {
		cout << "no path found";
	}
	return 0;
}