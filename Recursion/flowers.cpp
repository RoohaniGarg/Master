#include <iostream>
#include <climits>
#include <cstring>
using namespace std;
int n, k;
int f(int x) {
	if (x == 0) {
		return 1;
	}
	int op1 = f(x - 1);
	int op2 = 0;
	if (x - k >= 0) {
		op2 = f(x - k);
	}
	int ans = op1 + op2;
	return ans;
}
int main() {
	cin >> n >> k;
	cout << f(n) << endl;
	return 0;
}