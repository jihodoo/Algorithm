#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool compare(pair<int, string>q, pair<int, string>p) {
	return q.first < p.first;
}

int main() {
	int N;
	cin >> N;
	vector < pair<int, string>>people;
	for (int i = 0; i < N; i++) {
		int a;
		string b;
		cin >> a >> b;
		people.push_back(pair<int, string>(a, b));
	}
	stable_sort(people.begin(), people.end(),compare);
	for (int i = 0; i < N; i++) {
		cout << people[i].first << " " << people[i].second<<"\n";
	}
	return 0;
}