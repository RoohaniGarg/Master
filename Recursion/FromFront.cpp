#include <iostream>
#include <climits>
#include <cstring>
using namespace std;
int f1(int x, int a, int b) {
	if (x == b) {
		return a;
	}
	int ans = a * f1(x + 1, a, b);
	return ans;
}
int a, b;
int f(int x) {
	if (x == b) {
		return a;
	}
	int ans = a * f(x + 1);
	return ans;
}
int main() {
	cin >> a >> b;
	cout << f1(1, a, b) << endl;
	cout << f(1) << endl;
	return 0;
}