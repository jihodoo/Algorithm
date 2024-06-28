#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int>a, pair<int, int>b) {
    if (a.first == b.first) return a.second < b.second;
    else
        return a.first < b.first;
}


int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> spot;
    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        spot.push_back(pair<int, int>(a, b));
    }
    sort(spot.begin(), spot.end(), compare);
    for (int i = 0; i < N; i++) {
        cout << spot[i].first << " " << spot[i].second<<"\n";
    }
    return 0;
}