#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// F(x) : Total ways to eat x flowers.
// F(x) : F(x-1)+F(x-k);
// F(0) : 1
int n, k;

int F(int x) {
  // Stopping Point :
  if (x == 0) {
    return 1;
  }

  // Current State : F(x) :

  // Total ways to eat x flowers when xth flower is red.
  int Op1 = F(x - 1);

  // Total ways to eat x flowers when xth flower is white.
  int Op2 = 0;
  if (x - k >= 0) {
    // Only now i will put the white flowers.
    Op2 = F(x - k);
  }

  // Current State Ka Answer : F(x):
  int ans = Op1 + Op2;
  return ans;
}

int main() {
  cin >> n >> k;

  // Starting Point :
  cout << F(n) << endl;

  return 0;
}