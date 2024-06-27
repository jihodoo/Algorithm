#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<int> A;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		A.push_back(a);
	}
	int count = 0;
	for (int i = 0; i < N; i++) {
		int c = 0;
		for (int j = i; j <N; j++) {
			c = c + A[j];
			if (c == M) { 
				count++;
				break;
			}
			if (c > M) break;
		}
	}
	cout << count;

	return 0;
}