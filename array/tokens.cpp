#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char str[100];
	cin.getline(str, 100);
	char *token = strtok(str, " ");
	cout << token << endl;
	while (token != nullptr) {
		token = strtok(nullptr, " ");
		cout << token << endl;
	}
	return 0;
}