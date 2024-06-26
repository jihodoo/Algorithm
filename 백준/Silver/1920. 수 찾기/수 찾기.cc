#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> A;
	vector<int> B;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		A.push_back(a);
	}
	int M;
	cin >> M;
	
	for (int i = 0; i < M; i++) {
		int a;
		cin >> a;
		B.push_back(a);
	}
	sort(A.begin(), A.end());
	for (int i = 0; i < M; i++) {
		cout << binary_search(A.begin(), A.end(), B[i])<<"\n";
	}

	return 0;
}