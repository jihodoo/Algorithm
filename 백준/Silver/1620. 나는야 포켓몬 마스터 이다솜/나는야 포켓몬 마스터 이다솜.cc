#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int N, M; string name; string tmp;
map <string, int> mp;
vector<string> v;

int main() {
	ios::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		cin >> name;
		mp.insert({ name, i });
		v.push_back(name);
	}
	for (int i = 0; i < M; i++) {
		cin >> tmp;
		if (mp[tmp]) cout << mp[tmp] << "\n";
		else {
			int a = stoi(tmp);
			cout << v[a - 1] << "\n";
		}
	}
	return 0;
}