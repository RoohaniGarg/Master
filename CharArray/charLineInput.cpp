#include <iostream>
using namespace std;


int main() {
	//white spaces are not read by cin
	char ch[100];
	char ch1[100];
	//cin.getline(ch,100,EOF);

	cin >> ch >> ch1;
	//segregated word by word output from sentence
	cout << ch << ch1;
	return 0;
}