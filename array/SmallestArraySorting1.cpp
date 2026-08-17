#include <iostream>
using namespace std;


int main() {
   int n;
   cin >> n;
   int a[n];
   for (int i = 0; i < n; i++) {
      cin >> a[i];
   }
   int mini_index = 0;
   for (int i = 1; i < n; i++) {
      if (a[i] < a[mini_index]) {
         mini_index = i;
      }
   }
   int tem = a[0];
   a[0] = a[mini_index];
   a[mini_index] = tem;
   for (int i = 0; i < n; i++) {
      cout << a[i] << "\t";
   }
   return 0;
}