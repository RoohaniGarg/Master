#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

// Computations :No of states * Transition Time :
// No of states :
// Transition Time : ~constant
int n;

int F(int x, int y) {
  // current state :F(x,y)
  if (x == 1 and y == 1) {
    return 0;
  }

  // Current State : F(x,y):
  int Op1 = 0, Op2 = 0;

  if (x - y > 0) {
    Op1 = 1 + F(x - y, y);
    return Op1;
  }

  if (y - x > 0) {
    Op2 = 1 + F(x, y - x);
    return Op2;
  }
}

int Solve() {
  if (n == 1) {
    return 0;
  }

  int final = INT_MAX; // Minimum steps across all the paths.
  for (int i = 1; i < n; i++) {
    // Current Pair : (i,n-i)
    // Now calculate the minimum steps from this pair i,n-i to 1,1.
    // and across all the pairs find the minimum.

    // This ans variable will store the minimum steps from this current
    //  pair to 1,1.
    int ans = 1 + F(i, n - i);
    final = min(ans, final);
  }

  return final;
}

int main() {
  cin >> n;
  int val = Solve();
  // This function is for pair generation jaha se aapko 1,1 tak ka time aap
  // nikaloge.

  cout << val << endl;
  return 0;
}