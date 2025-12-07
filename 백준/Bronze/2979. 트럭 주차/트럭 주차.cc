#include <iostream>
using namespace std;

int  A, B, C;
int sum = 0;
int times[101] = { 0 };
int main() {
    cin >> A >> B >> C;
    for (int i = 0; i < 3; i++) {
        int a, b;
        cin >> a >> b;
        for (int i = a; i < b; i++) {
            times[i] ++;
        }
    }
    for (int i : times) {
        if (i == 1) {
            sum += i * A;
        }
        else if (i == 2) {
            sum += i * B;
        }
        else if (i == 3) {
            sum += i * C;
        }
    }

    cout << sum;
    return 0;
}