#include <iostream>
#include <climits>
#include <cstring>
using namespace std;
int a, b;
int f(int x) {
	if (x == 0 ) {
		return 1;
	}
	int ans = a * f(x - 1);
	return ans;
}
int main() {
	cin >> a >> b;
	cout << f(b) << endl;
	return 0;
}