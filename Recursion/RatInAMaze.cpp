#include <iostream>
#include <climits>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;
int n;
char maze[1001][1001];
int visited[1001][1001] {};

int dx[] {0, 0, -1, 1};
int dy[] {1, -1, 0, 0};
char directionLabel[] {'R', 'L', 'U', 'D'};
vector<string> allpaths;
string currentpath;
void f(int x, int y) {
	if (x == n and y == n) {
		allpaths.push_back(currentpath);
		return;
	}

	/*if (visited[x][y] == 1) {
		return;
	}*/
	visited[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 1 and nx <= n and ny >= 1 and ny <= n and visited[nx][ny] == 0) {
			currentpath.push_back(directionLabel[i]);
			f(nx, ny);
			currentpath.pop_back();
		}
	}
	visited[x][y] = 0;
}



int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> maze[i][j];
			if (maze[i][j] == '0') {
				visited[i][j] = 1;
			}
		}
	}
	if (maze[1][1] == '0' or maze[n][n] == '0') {
		cout << " ";
		return 0;
	}
	f(1, 1);
	sort(allpaths.begin(), allpaths.end());
	for (int i = 0; i < allpaths.size(); i++) {
		cout << allpaths[i] << " ";

	}
	return 0;
}