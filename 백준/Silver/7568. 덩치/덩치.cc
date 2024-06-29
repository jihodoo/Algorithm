#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> hum;
    vector<int> rank;
    for (int i = 0; i < N; i++) {
        int a, b;
        int c = 1;
        cin >> a >> b;
        hum.push_back(pair<int, int>(a, b));
        rank.push_back(c);
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++){
            if (hum[i].first == hum[j].first || hum[i].second == hum[j].second) continue;
            else if (hum[i].first <= hum[j].first && hum[i].second <= hum[j].second) rank[i]++;
        }
    }
    for (int i = 0; i < N; i++) {
        cout << rank[i]<<" ";
    }
    return 0;
}