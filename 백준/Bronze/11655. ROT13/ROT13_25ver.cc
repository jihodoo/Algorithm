#include <iostream>
#include <string>
using namespace std;

string s;
int main() {
    getline(cin, s);

    for (char c : s) {
        if (c >= 'A' && c <= 'A' + 12) cout << char(c + 13);
        else if (c >= 'A' + 13 && c <= 'Z') cout << char(c - 13);
        else if (c >= 'a' && c <= 'a' + 12) cout << char(c + 13);
        else if (c >= 'a' + 13 && c <= 'z') cout << char(c - 13);
        else cout << c;
    }
    return 0;
}
