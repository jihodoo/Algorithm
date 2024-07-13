#include <iostream>
#include <vector>
using namespace std;

int T;

int main() {
    cin >> T;
    for (int i = 0; i < T; i++) {
        int k, n;
        cin >> k >> n;
        vector<vector<int>> arr(k + 1, vector<int>(n));

        for (int i = 0; i < n; i++) {
            arr[0][i] = i + 1;
        }
        for (int i = 1; i <= k; i++) {
            arr[i][0] = 1;
        }
        for (int i = 1; i <= k; i++) {
            for (int j = 1; j < n; j++) {
                arr[i][j] = (arr[i][j - 1] + arr[i - 1][j]);
            }
        }

        cout << arr[k][n - 1]<<"\n";
    }

    return 0;
}
