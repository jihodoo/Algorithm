#include <iostream>

using namespace std;

int N, K; int tmp;
int psum[100001];
int total = -100*100000 -1;  //최악의 상황일때 최솟값

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> N >> K;
	for (int i = 1; i <= N; i++) {
		cin >> tmp;
		psum[i] = psum[i - 1] + tmp;
	}
	for (int i = K; i <= N; i++) {
		total = max(total, psum[i] - psum[i - K]);
	}
	cout << total;
	return 0;
}