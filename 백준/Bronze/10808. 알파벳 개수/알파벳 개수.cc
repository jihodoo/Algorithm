#include <iostream>
#include <map>


using namespace std;

string text;

int main() {
    cin >> text;

    string alphbet = "abcdefghijklmnopqrstuvwxyz";
    map<char, int> mp;

    for (int i = 0; i < alphbet.size(); i++) {
        mp[alphbet[i]] = 0;
    }
    for (auto& t : text) {
        mp[t]++;
    }
    for (const auto& m : mp) {
        cout << m.second << " ";
    }
    
    return 0;
}