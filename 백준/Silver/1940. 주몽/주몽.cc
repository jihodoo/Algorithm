#include <iostream>
#include <vector>
using namespace std;

int N, M, cnt;
vector<int> num;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		num.push_back(a);
	}
	for (int i = 0; i < num.size() -1 ; i++) {
		for (int j = i + 1; j < num.size(); j++) {
			if (num[i] + num[j] == M) cnt++;
		}
	}
	cout << cnt << "\n";

	return 0;
}