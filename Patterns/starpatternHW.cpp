#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int r = 1;
    for (int r = 1; r <= n / 2; r += 1) {
        int c = 1;
        while (c <= r) {
            cout << "*";
            c += 1;
        }
        cout << endl;
    }
    for (int r = (n / 2) + 1; r <= n; r += 1) {
        int c = 1;
        while (c + r <= n + 1) {
            cout << "*";
            c += 1;
        }
        cout << endl;
    }
    return 0;
}
