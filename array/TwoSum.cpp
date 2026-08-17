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
    int x;
    cin >> x;
    for (int i = 0; i < n - 1; i += 1) {
        int ce = a[i];
        for (int j = 0; j < n; j += 1) {
            int key = x - ce;
            if (i < j and a[j] == key) {
                cout << a[i] << " " << a[j] << endl;
            }
        }
    }
}
------------------------------------------------------
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
    int x;
    cin >> x;
    for (int i = 0; i < n - 1; i += 1) {
        for (int j = i + 1; j < n; j += 1) {
            if (a[j] + a[i] == x) {
                cout << a[i] << " " << a[j] << endl;
            }
        }
    }
}
