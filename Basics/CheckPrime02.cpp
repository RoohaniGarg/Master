#include <iostream>
using namespace std;


int main() {
	int n;
	cin >> n;
	int i = 2;
	while (i < n) {
		if ((n % i) == 0) {
			break;
		}
		i += 1;
	}
	if (i == n) {
		cout << n << " is prime";
	} else {
		cout << n << " is not prime";
	}
	return 0;
}