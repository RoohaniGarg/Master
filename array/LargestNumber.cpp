#include <iostream>
#include <cstring>
using namespace std;
//using bubble sort
bool compare(string &x, string &y) {
	string xy = x + y;
	string yx = y + x;
	if (xy > yx) {
		return true;

	} else {
		return false;
	}
}
string bubblesort(string a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (compare(a[j], a[j + 1]) == 0) {
				swap(a[j], a[j + 1]);
			}
		}
	}
}
int main() {
	int n;
	cin >> n;
	string a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	bubblesort(a, n);
	for (int i = 0; i < n; i++) {
		cout << a[i];
	}

	return 0;
}