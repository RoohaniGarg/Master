#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i += 1) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i += 1) {
        for (int j = i; j <= n; j += 1) {
            for (int k = i; k < j; k += 1) {
                cout << a[k] << " ";
            }
            cout << endl;

        }
    }
    return 0;
}