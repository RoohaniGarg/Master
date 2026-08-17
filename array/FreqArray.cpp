#include <bits/stdc++.h>
#include <climits>
using namespace std;


int main() {
	int n;
	cin >> n;
	int a[n];
	int maxi = INT_MIN;
	int mini = INT_MAX;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > maxi) {
			maxi = a[i];
		}
		if (a[i] < mini) {
			mini = a[i];
		}
	}
	int freq[maxi - mini + 1] {};
	for (int i = 0; i < n; i++) {
		int ce = a[i];
		int us = ce - mini;
		freq[us] += 1;
	}
	for (int i = 0; i < maxi - mini + 1; i++) {
		if (freq[i] > 0) {
			int os = i + mini;
			cout << os << "freq is" << freq[i] << endl;
		}
	}

	return 0;


}