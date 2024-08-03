#include <iostream>
#include <map>
#include <vector>
using namespace std;

int T;

int main() {
    cin >> T;
    for (int i = 0; i < T; i++) {
        map<string, int>mp;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            string a, b;
            cin >> a >> b;
            if (mp.find(b) != mp.end()) {
                mp[b]++;
            }
            else {
                mp.insert({ b, 1 });
            }
        }
        int ans = 1;
        for (auto i : mp) {
            ans *= (i.second+1);
        }
        cout << ans - 1 << "\n";        
    }
    return 0;
}