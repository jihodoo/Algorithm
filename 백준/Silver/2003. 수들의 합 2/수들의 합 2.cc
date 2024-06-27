//using two pointer
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
	int first = 0;
	int second = 0;
	int c = A[first];
	while (first <= second && second < N) {
		if (c < M) {
			if (second < N-1) {
				second++;
				c = c + A[second];
			}
			else
				break;
			
		}
		else if (c == M) {
			count++;
            second++;
			if (second < N) {
				c = c + A[second];
			}

		}
		else if (c > M) {
			c = c - A[first];
			first++;
			if (first > second) {
				second = first;
				c = A[first];
			}
		}
	}
	
	cout << count;

	return 0;
}