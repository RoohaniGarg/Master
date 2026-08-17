#include <iostream>
#include <climits>
#include <cstring>
using namespace std;
const int N = 1e5 + 5;
int n;
int a[N];
int key;
//f(x)=check if x(curent element)==key
bool f(int x) {
	if (x < 0) {
		return false;
	}
	if (a[x] == key) {
		return true;
	}
	//currently at f(x)
	//for going on on next and store in ans
	// now elements are narrowed to x+1 t o n-1
	bool ans = f(x - 1);
	return ans;
	//or simply return next index
	//return f(x -1);
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> key;
	bool ans = f(n - 1);
	cout << ans << endl;
	return 0;
}