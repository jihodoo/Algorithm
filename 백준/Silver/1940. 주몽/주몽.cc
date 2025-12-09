#include <iostream>
#include <vector>
using namespace std;

int N, M;
int cnt;
vector<int> v;
int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int sum = v[i] + v[j];
            if (sum == M) cnt++;
        }
    }
    cout << cnt;
    return 0;
}