//Greedy Algorithm
#include <iostream>

using namespace std;

int N;

int main() {
	cin >> N;
	int sum = 0;
	int a = 0;
	while (N > 0) {
		if (N % 5 == 0) {
			sum += (N / 5);
			cout << sum;
			a++;
			break;
		}
		N -= 3;
		sum++;
	}
	if (N == 0) { 
		cout << sum;
		a++;
	}
	if (a == 0) {
		cout << -1;
	}

	return 0;
}