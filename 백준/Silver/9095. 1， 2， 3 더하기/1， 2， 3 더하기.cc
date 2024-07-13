#include <iostream>

using namespace std;

int T;
int dp[11];

int main() {
    cin >> T;
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= 10; i++) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i-3];
    }
    for (int i = 0; i < T; i++) {
        int n;
        cin >> n;
        cout << dp[n]<<'\n';
    }
    return 0;
}