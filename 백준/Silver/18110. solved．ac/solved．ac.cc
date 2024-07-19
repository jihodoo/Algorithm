#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

float n, sum;
int ans;

int main() {
	
	cin >> n;
	if (n == 0) {
		cout << 0;
		return 0;
	}
	vector<int> v(n);
	vector<int> vote;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());	
	int no_vote = floor(n * 0.15 + 0.5);

	for (int i = no_vote; i < n - no_vote; i++) {
		sum += v[i];
	}
	ans = floor(sum / (n - 2 * no_vote) + 0.5);
	cout << ans;
	return 0;
}