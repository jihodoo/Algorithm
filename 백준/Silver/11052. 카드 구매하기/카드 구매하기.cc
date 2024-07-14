#include <iostream>
#include <vector>
using namespace std;

int N;

int main() {
    cin >> N;
    vector<int> cards(N + 1);
    vector<int> dp(N + 1);

    for (int i = 1; i <= N; i++) {
        int a;
        cin >> a;
        cards[i] = a;
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            int MAX = max(dp[i - j] + dp[j], cards[i]);
            if (MAX > dp[i]) dp[i] = MAX;
        }
    }
    cout << dp[N];
    return 0;
}