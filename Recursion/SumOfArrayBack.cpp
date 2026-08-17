#include <iostream>
#include <climits>
#include <cstring>
using namespace std;
const int N = 1e5 + 5;
int n;
int a[N];
//f(x)=sum of elements from xth index till n-1 index
int f(int x) {
	if (x == 0) {
		return a[0];
	}
	int ans = a[x] + f(x - 1);
	return ans;
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = f(n - 1);
	cout << ans << endl;
	return 0;
}