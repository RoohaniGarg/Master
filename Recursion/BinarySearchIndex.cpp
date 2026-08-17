#include <iostream>
#include <climits>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 1e5 + 5;
int n;
int a[N];
int key;
bool f(int s, int e) {
	int mid = (s + e) / 2;
	//stopping point
	if (s > e) {
		return false;
	}
	if (a[mid] == key) {
		return mid;
	} else {
		return n;
	}
	//current state: f(s,e)
	if (a[mid] > key) {
		return f(s, mid - 1);
	} else {
		return f(mid + 1, e);
	}
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> key;
	//sorting: sort(address,adress+[lastindex+1])
	sort(a, a + n);
	int ans = f(0, n - 1);
	cout << ans << endl;
	return 0;
}