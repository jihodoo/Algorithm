#include <iostream>
#include <vector>
using namespace std;

int N;

int main() {
    cin >> N;
    vector<int> cards(N + 1);
    vector<int> dp(N + 1);

    for (int i = 1; i <= N; i++) {
        cin >> cards[i];
    }

    for (int i = 1; i <= N; i++) {
        dp[i] = 10000;
        for (int j = 1; j <= i; j++) {
            dp[i] = min(dp[i - j] + cards[j], dp[i]);
        }
    }
    cout << dp[N];
    return 0;
}