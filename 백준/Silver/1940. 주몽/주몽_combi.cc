#include <iostream>
#include <vector>
using namespace std;

int N, M;
int a[15001];
vector<int> combis;
int cnt;

void combi(int start, vector<int> &c) {
    if (c.size() == 2) {
        if (a[c[0]] + a[c[1]] == M) {
            cnt++;
        }
        return;
    }

    for (int i = start+1; i < N; i++) {
        c.push_back(i);
        combi(i, c);
        c.pop_back();
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    combi(-1, combis);
    cout << cnt<<"\n";
    return 0;
}
