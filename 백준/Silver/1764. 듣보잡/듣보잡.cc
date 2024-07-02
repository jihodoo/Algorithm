#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

map<string, int> mp;
vector<string> list;
int N, M;
string name;

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> name;
        mp[name]++;
    }
    for (int i = 0; i < M; i++) {
        cin >> name;
        mp[name]++;
    }
    for (const auto& n : mp) {
        if (n.second == 2) list.push_back(n.first);
    }
    sort(list.begin(), list.end());
    cout << list.size() << "\n";
    for (int i = 0; i < list.size(); i++) {
        cout << list[i] << "\n";
    }
    return 0;
}