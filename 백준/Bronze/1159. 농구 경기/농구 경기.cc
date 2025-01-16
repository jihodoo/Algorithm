#include <iostream>
#include <map>
using namespace std;

map<char, int> mp; int N; string name;
int check;

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> name;
		mp[name[0]]++;
	}
	for (auto it : mp) {
		if (it.second >= 5) { 
			check = 1;
			cout << it.first; 
		}
	}
	if (check == 0) cout << "PREDAJA";


	return 0;
}