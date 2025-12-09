#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
int a[15001];
int cnt;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    sort(a, a + N);

    int l = 0, r = N - 1;
    while (l < r) {
        int sum = a[l] + a[r];
        if (sum == M) {
            cnt++;
            l++;
            r--;
        }
        else if (sum < M) l++;
        else r--;
    }

    cout << cnt<<"\n";
    return 0;
}