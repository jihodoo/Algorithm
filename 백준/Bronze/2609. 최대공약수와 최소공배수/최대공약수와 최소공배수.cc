//유클리드 호재법
#include <iostream>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int G_div = 1;
    int G_mul = 1;
    int n = N;
    int m = M;
    int t = 0;
    while (true) {
        t = n % m;
        if (t == 0) 
        {
            G_div = m;
        }
        else {
            n = m;
            m = t;
        }
        if (t == 0)break;
    }
    int a = N / G_div;
    int b = M / G_div;
    G_mul = G_div * a * b;
    cout << G_div << "\n" << G_mul;
    return 0;
}