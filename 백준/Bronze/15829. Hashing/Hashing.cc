#include <iostream>
#include <cmath>
using namespace std;

int L;
string text;

int main() {
    cin >> L >> text;
    int sum = 0;
    for (int i = 0; i < L; i++) {
        int n = text[i] - 'a' +1;
        sum += n * pow(31, i);
    }
    cout << sum % 1234567891;
    return 0;
}