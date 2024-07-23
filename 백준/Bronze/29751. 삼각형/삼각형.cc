#include <iostream>

using namespace std;

float W, H;

int main() {
    cin >> W >> H;
    float ans = W * H / 2;
    cout << fixed;
    cout.precision(1);
    cout << ans;

    return 0;
}