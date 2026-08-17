#include <bits/stdc++.h>
using namespace std;

int main() {

  // Explicit Type Casting
  double x{30.89};
  cout << (int)x << endl;

  // Implicit Type Casting
  double b{45.67};
  int a = b;
  cout << a << endl;

  double c{9.7};
  int d = 101;
  cout << (d / c) << endl; //in float as b in float
  cout << d / 10 << endl; //in int as both int
  cout << d / 10.0 << endl; //in float ans 10.0
  cout << c / 10 << endl; //in float as b in float dt


  return 0;
}