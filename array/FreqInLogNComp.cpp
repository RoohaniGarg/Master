#include <iostream>
using namespace std;
int s = 0, e = n - 1;
int ans = n;
while (s <= e) {

}



int main() {
   int n;
   cin >> n;
   int a[n];
   for (int i = 0; i < n; i++) {
      cin >> a[i];
   }
   int target;
   cin >> target;
   int ans = lower_bound(a, n, target);
   int ans2 = upper_bound(a, n, target);
   cout << ans2 - ans << endl;





   return 0;
}