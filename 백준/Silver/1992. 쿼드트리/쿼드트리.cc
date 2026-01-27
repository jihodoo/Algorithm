#include <iostream>
#include <string>
using namespace std;

int N;
int a[65][65];


string check(int y, int x, int size) {
    if (size == 1) return string(1, a[y][x]);
    string ret = "";
    char b = a[y][x];
    for (int i = y; i < y + size; i++) {
        for (int j = x; j < x + size; j++) {
            if (b != a[i][j]) {
                ret += "(";
                ret += check(y, x, size / 2);
                ret += check(y, x + size/2, size / 2);
                ret += check(y + size/2, x, size / 2);
                ret += check(y + size/2, x + size/2, size / 2);
                ret += ")";
                return ret;
            }
        }
    }
    return string(1, a[y][x]);
}


int main() {
    cin >> N;
    string s;
    for (int i = 0; i < N; i++) {
        cin >> s;
        for (int j = 0; j < N; j++) {
            a[i][j] = s[j];
        }
    }

    cout << check(0, 0, N) << "\n";
    return 0;
}