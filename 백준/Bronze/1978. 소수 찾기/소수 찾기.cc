#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	vector<int> number;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		number.push_back(a);
	}
	int sosu = 0;
	for (int i = 0; i < N; i++) {
		int count = 0;
		for (int j = 1; j <= number[i]; j++)
		{
			if (number[i] % j == 0) count++;
		}
		if (count == 2) sosu++;
	}
	cout << sosu;
	return 0;
}