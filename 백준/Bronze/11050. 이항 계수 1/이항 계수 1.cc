#include <iostream>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    if (K == 0) cout << 1;
    else if (N == K) cout << 1;
    
    else {
        int n = 1;
        for (int i = 1; i <= N; i++) {
            n = n * i;
        }
        int k = 1;
        for (int i = 1; i <= K; i++) {
            k = k * i;
        }
        int n_k = 1;
        for (int i = 1; i <= N - K; i++) {
            n_k = n_k * i;
        }
        cout << n / (k * n_k);
    }
    return 0;
}