#include <iostream>
#include <climits>
using namespace std;
int n, k;
int ch[100003];

int Solve(char x) {
	int sp = 0, ep = 0;
	int maxi = INT_MIN;
	int count = 0;
	for (; j < n; j++) {
		//expansion
		if (ch[ep] == x) {
			//undesired character
			count += 1;
		}
		//shrinking
		while (count > k and sp <= ep) {
			if (count > k and sp < ep) {

			}
		}
	}



}



int main() {
	cin >> n >> k;
	cin >> ch;
	int ans01 = Solve('a');
	int ans02 = Solve('b');
	if (ans01 > ans02) {
		cout << ans01;
	} else {
		cout << ans02;
	}
	return 0;
}