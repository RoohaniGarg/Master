#include <iostream>
#include <climits>
using namespace std;
#define int long long
int32_t main() {
	int n, m;
	cin >> n >> m;
	if (n <= m) {
		cout << n << endl;
		return 0;
	}
	int day = 1;
	int bg = n;
	while (bg > 0) {
		bg -= day;
		if (bg <= 0) {
			break;
		}
		day += 1;
		bg += m;
		if (bg > n) {
			bg = n;
		}
	}
	cout << day << endl;
	return 0;
}