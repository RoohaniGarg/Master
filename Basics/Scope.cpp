#include <iostream>
using namespace std;

int x{10}; //global scope

int main() {
  int x{90}; //local scope

  if (x > 30) {  //starts finding value of x yaha se upar
    cout << x << endl;
    cout << "Yo" << endl;
  }

  cout << x << endl;
}