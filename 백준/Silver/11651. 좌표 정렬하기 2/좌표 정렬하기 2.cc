#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(pair<int, int>a, pair<int, int>b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	else {
		return b.second>a.second;
	}
}



int main() {
	int N;
	cin >> N;
	vector<pair<int, int>> XY;
	
	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;
		XY.push_back(pair<int,int>(x, y));
	}
	sort(XY.begin(), XY.end(), compare);
	for (int i = 0; i < N; i++) {
		cout << XY[i].first <<" "<< XY[i].second << "\n";
	}
	

	return 0;
}