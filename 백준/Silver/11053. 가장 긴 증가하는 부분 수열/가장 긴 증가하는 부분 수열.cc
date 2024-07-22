#include <iostream>
#define N_max 1001
using namespace std;

int N;
int arr[N_max];
int dp[N_max];

int main() {
    cin >> N;
    int answer = 0;
    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= N; i++) {
        dp[i] = 1;
        for (int j = i - 1; j >= 1; j--) {
            if (arr[i] > arr[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        answer = max(dp[i], answer);
    }
    cout << answer;


    return 0;
}