#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v; int a;
vector<int> v2;

void combi(int start, vector<int> v2) {
	if (v2.size() == 7) {
		int cnt = 0;
		for (int i : v2) cnt += i;
		if (cnt == 100) {
			sort(v2.begin(), v2.end());
			for (int i : v2) cout << i << "\n";
			exit(0);
		}
		return;
	}
	for (int i = start + 1; i < 9; i++) {
		v2.push_back(v[i]);
		combi(i, v2);
		v2.pop_back();
	}
}

int main() {
	for (int i = 0; i < 9; i++) {
		cin >> a;
		v.push_back(a);
	}
	combi(-1, v2);
	return 0;
}
