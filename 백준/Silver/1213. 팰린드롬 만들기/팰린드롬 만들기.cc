#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

string s;
map<char, int> mp;
int main() {
    cin >> s;
    for (char c : s) {
        mp[c]++;
    }
    int odd = 0;
    vector<char> front;
    vector<char> back;
    bool check = 0;
    char middle;

    for (auto it : mp) {
        if ((it.second % 2) == 1) {
            odd++;
            middle = it.first;
            check = 1;
        }
        if (odd >= 2) {
            cout << "I'm Sorry Hansoo";
            return 0;
        }
        else {
            for (int i = 0; i < it.second / 2; i++) {
                front.push_back(it.first);
            }
        }
    }
    for (char c : front) cout << c;
    if (check == 1)cout << middle;
    reverse(front.begin(), front.end());
    for (char c : front) cout << c;
    return 0;
}