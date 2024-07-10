#include <iostream>

using namespace std;

int N;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	int sum = 0;
	sum += N / 5;
	sum += N / 25;
	sum += N / 125;
	cout << sum;
	return 0;
}