#include <iostream>
#include <climits>
#include <cstring>
using namespace std;

class car {
public:
	string name{"BMW"};
	string color{"black"};
	//getter
	int getprice() {
		return price;
	}
	//setter
	void setprice(int discount) {
		if (discount <= 25000) {
			price -= discount;
		} else {
			price -= 25000;
		}
	}
private:
	int price{100000};
protected:
};
int main() {
	int x{10};
	car c;
	cout << c.name << endl;
	//cout << c.price; not allowed as price is private cant be accessed outside.
	cout << c.getprice() << endl;
	c.setprice(20000);
	cout << c.getprice() << endl;
	return 0;
}