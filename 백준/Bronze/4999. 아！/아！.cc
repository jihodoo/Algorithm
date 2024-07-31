#include <iostream>

using namespace std;

string n, m;

int main() {
    cin >> n >> m;
    if (n.size() >= m.size()) cout << "go";
    else cout << "no";
    return 0;
}