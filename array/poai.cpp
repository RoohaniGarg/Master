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
        cout << a[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i += 1) {
        int ans = 1;
        for (int j = 0; j < n; j += 1) {
            if (i != j) {
                ans = ans * a[j];
            }

        }
        cout << ans << "\t";
    }
    return 0;
}
