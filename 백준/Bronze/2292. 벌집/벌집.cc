#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	int count = 1;
	int num = 1;
	int m = 1;

	while (true) {
		if (N <= num) break;
		num = num + 6 * m;
		m++;
		count++;
	}
	cout << count;
	//1 7 19 37 61
	// 6 12 18 24
}