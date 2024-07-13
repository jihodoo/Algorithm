#include <iostream>

using namespace std;

int n;
int dp[10001];

int main() {
    cin >> n;
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % 10007;
    }
    cout << dp[n];

    return 0;
}