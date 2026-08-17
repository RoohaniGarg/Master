#include <iostream>
#include <climits>
#include <cstring>
using namespace std;
int n;
//f(x,mx):generate all normal form from xth index where max char can be from a-mx+1
char output[12];
void f(int x, char mx) {
	//stopping pt
	if (x == n) {
		output[x] = '\0';
		cout << output << endl;
		return;
	}
	for (char ch = 'a'; ch <= mx; ch++) {
		output[x] = ch;
		if (ch == mx) {
			f(x + 1, mx + 1);
		} else {
			f(x + 1, mx);
		}
	}
	return;
}
int main() {
	cin >> n;
	f(0, 'a');
	return 0;
}