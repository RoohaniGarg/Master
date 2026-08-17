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

    //computations=n*n
    /*int b[n] {};
    for (int i = 0; i < n; i += 1) {
        if (b[i] == 1) {
            continue;
        }
        int c = 0;
        for (int j = i; j < n; j += 1) {
            if (a[i] == a[j]) {
                c += 1;
                b[j] = 1;
            }
        }
        cout << a[i] << " freq is " << c << endl;

    }*/

    int visited[n] {};
    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue;
        }
        int c = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == a[i]) {
                c += 1;
                visited[j] = 1;
            }
        }
        cout << a[i] << " freq is" << c << endl;
    }

    return 0;
}