#include <iostream>
using namespace std;


int main() {
	int x, y, z;
	cin >> x >> y >> z;
	if (x > y and x > z) {
		cout << x << " greatest";
	} else if (x<y and y>z) {
		cout << y << " greatest";
	} else {
		cout << z << " greatest";
	}
	return 0;
}