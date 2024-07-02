#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	int n = 0;
	int m = 0;
	vector<int> nums;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		nums.push_back(a);
	}
	for (int i = 0; i < N - 2; i++) {
		for (int j = i+1; j < N - 1; j++) {
			for (int k = j+1; k < N; k++) {
				int n = nums[i] + nums[j] + nums[k];
				if (n <= M && n > m) m = n;
			}
		}
	}
	cout << m;
	return 0;
}