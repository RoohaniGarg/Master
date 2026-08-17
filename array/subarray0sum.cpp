#include <iostream>
#include <climits>
using namespace std;


int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int pre[n + 1];
	pre[0] = a[0];
	int maxi = a[0];
	for (int i = 1; i < n; i++) {
		pre[i] = pre[i - 1] + a[i];
		if (pre[i] > maxi) {
			maxi = pre[i];
		}
	}
	int freq[maxi + 1] {};
	for (int i = 0; i < n; i++) {
		int maxi = INT_MIN;
		int ce = pre[i];
		freq[ce] += 1;
	}
	/*for (int i = 1; i < n; i++) {
		if (freq[i] > 1) {
			cout << "yes" << endl;
		}

	}
	if (freq[0] > 0) {
		cout << "yes" << endl;
	}*/

	freq[0] += 1;
	for (int i = 0; i < n; i++) {
		if (freq[i] > 1) {
			cout << "yes" << endl;
		}
	}

	cout << "no" << endl;
	return 0;
}