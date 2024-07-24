#include <iostream>
#include <map>
using namespace std;

int N, M;
map<string,string> mp;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        string a, b;
        cin >> a >> b;
        mp[a] = b;
    }
    for (int i = 0; i < M; i++) {
        string a;
        cin >> a;
        cout << mp[a]<<"\n";
    }
    return 0;
}