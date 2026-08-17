#include <iostream>
#include <climits>
#include <cstring>
using namespace std;
//creating data type car.
class car {
//access modifiers: by default private
public:
	string name{"BMW"};
	string color{"black"};
private:
	int price{100000};
protected:

};
int main() {
	int x{10};
	car c;
	cout << c.name << endl;
	//cout << c.price; not allowed as price is private cant be accessed outside.
	return 0;
}