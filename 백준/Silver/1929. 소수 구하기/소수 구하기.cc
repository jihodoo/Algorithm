#include <iostream>
#include <vector>

using namespace std;

int M, N;

int main() {
    cin >> M >> N;
    vector<int> v(N + 1);
    v[1] = 1;
    for (int i = 2; i * i <= N; i++) {
        if (v[i] == 1) continue;
        for (int j = i * 2; j <= N; j += i) {
            if (v[j] == 1) continue;
            else v[j] = 1;
        }
    }

    for (int i = M; i <= N; i++) {
        if (v[i] == 0) cout << i << "\n";
    }
    return 0;
}