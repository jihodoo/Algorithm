#include <iostream>
#include <vector>

using namespace std;

vector<int> v(3);

int main() {
	for (int i = 0; i < 3; i++) {
		cin >> v[i];
	}
	vector<int> tmp(3);
	tmp[0] = tmp[1] = tmp[2] = 1;
	int day = 1;
	while (true) {
		if (tmp[0] == v[0] && tmp[1] == v[1] && tmp[2] == v[2]) {
			cout << day;
			return 0;
		}
		tmp[0]++;
		tmp[1]++;
		tmp[2]++;
		day++;
		if (tmp[0] == 16) {
			tmp[0] = 1;
		}
		if (tmp[1] == 29) {
			tmp[1] = 1;
		}
		if (tmp[2] == 20) {
			tmp[2] = 1;
		}
	}
	return 0;
}