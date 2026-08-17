#include <iostream>
#include <cstring>
using namespace std;
//----------------------------------------------------------------
//computations= s.length()^2
int noise(string &s) {
	int ans = 0;
	for (int i = 0; i < s.length(); i++) {
		int count = 0;
		if (s[i] == 's') {
			for (int j = i + 1; j < s.length(); j++) {
				if (s[j] == 'h') {
					count += 1;
				}
			}
		}
		ans += count;
	}
	return ans;
}
//-----------------------------------------------------------------
//computations = s.length()
int noise1(string &s) {
	int ans = 0;
	int counts = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 's') {
			counts++;
		} else {
			ans += counts;
		}

	}
	return ans;
}
bool compare(string &x, string &y) {
	string xy = x + y;
	string yx = y + x;
	if (noise1(xy) > noise1(yx)) {
		return true;
	} else {
		return false;
	}
}
string bubblesort(string s[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (compare(s[j], s[j + 1]) == 0) {
				swap(s[j], s[j + 1]);
			}
		}
	}
}
int main() {
	int n;
	cin >> n;
	string s[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	bubblesort(s, n);
	string final{""};
	for (int i = 0; i < n; i++) {
		final += s[i];
	}

	cout << noise1(final);


	return 0;
}