#include <iostream>
#include <string>
#include <map>

using namespace std;

int T;

int main() {
	cin >> T;
	for (int i = 0; i < T; i++) {
		int n; string name, type;
		map<string, int> mp;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> name >> type;
			mp[type]++;
		}
		int ret = 1;
		for (auto it : mp) {
			it.second += 1;
			ret *= it.second;
		}
		cout << ret - 1 << "\n";
	}
	return 0;
}