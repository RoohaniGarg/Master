#include <iostream>
#include <climits>
#include <cstring>
using namespace std;
const int N = 10;
int n;
int grid[N][N];
int dx[] {1, 1, 2, 2, -1, -1, -2, -2};
int dy[] {2, -2, 1, -1, 2, -2, 1, -1};
int totalboxes = 0;
void input() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> grid[i][j];
			if (grid[i][j] == 1) {
				totalboxes += 1;
			}
		}
	}
}
int f(int x, int y) {
	//we will not write stopping pt as we dk the
	//exact coordinates where knight will stop.
	//currect state:f(x,y)
	grid[x][y] = 0;
	int maxi = 0;
	for (int i = 0; i < 8; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 and ny >= 0 and nx < n and ny < n and grid[nx][ny] == 1) {
			int smallans = f(nx, ny);
			maxi = max(maxi, smallans);
		}
	}
	grid[x][y] = 1;
	return 1 + maxi;
}
int main() {
	input();
	if (grid[0][0] == 0) {
		cout << "NO SOLUTION EXISTS";
		return 0;
	}
	cout << totalboxes - f(0, 0);
	return 0;
}