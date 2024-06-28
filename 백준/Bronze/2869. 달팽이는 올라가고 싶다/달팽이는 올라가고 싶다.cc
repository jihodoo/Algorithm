#include <iostream>

using namespace std;
int main() {
    int A, B, V;
    cin >> A >> B >> V;
    int day = 0;
    int n = 0;
    n = A - B; //1day 끝날때 이동한 거리.
    V = V - A;
    if (V == 0) {
        day = 1;
    }
    else {
        if ((V % n) != 0) day = (V / n) + 2;
        else
            day = (V / n) + 1;
    }
    cout << day;
    return 0;
}