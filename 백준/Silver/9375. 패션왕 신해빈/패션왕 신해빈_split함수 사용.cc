#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

vector<string> split(string s, string delimiter) {
    auto start = 0; 
    auto end = s.find(delimiter);
    vector<string> result;
    while(end!=string::npos) {
        result.push_back(s.substr(start, end - start));
        start = end + delimiter.size();
        end = s.find(delimiter, start);
    }
    result.push_back(s.substr(start));
    return result;
}


int T;
int main() {
    cin >> T;
    for (int i = 0; i < T; i++) {
        int n;
        cin >> n;
        string bufferflush;
        getline(cin, bufferflush);

        map<string, int> mp;
        vector<string> v;
        for (int j = 0; j < n; j++) {
            string s;
            getline(cin, s);
            v = split(s," ");
            mp[v[1]]++; //type
        }
        int cnt = 1;
        for (auto it : mp) {
            cnt *= it.second + 1;
        }
        cout << --cnt << "\n";
    }
    return 0;
}
