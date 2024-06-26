#include <iostream>
#include <queue>

using namespace std;
int main() {
	int A = 0;
	int N = 0;
	int M = 0;
	cin >> N >> M;
	cout << "<";
	queue<int> q;
	for (int i = 0; i < N; i++) {
		q.push(i + 1);
	}
	while (q.empty() == 0) {
		for (int i = 0; i < M; i++) {
			if (i != M - 1) {
				A = q.front();
				q.pop();
				q.push(A);
			}
			else {
				if (q.size() != 1) {
					cout << q.front() << ", ";
					q.pop();
				}
				else {
					cout << q.front();
					q.pop();
				}
			}
		}

	}
	cout << ">";
	return 0;
}