#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    char ch[100];
    strcpy(ch, str.c_str());
    char *token = strtok(ch, " ");
    cout << token << endl;

    while (token != nullptr) {
        token = strtok(nullptr, " ");
        cout << token << endl;
    }
    return 0;
}