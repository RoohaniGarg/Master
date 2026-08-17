#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++) {
		int flag = 0;
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				int tem = a[j + 1];
				a[j + 1] = a[j];
				a[j] = tem;
				flag = 1;
			}
		}
		if (flag == 0) {
			cout << "yo";
			break;

		}
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << "\t";
	}
	return 0;
}