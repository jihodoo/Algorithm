#include <iostream>

using namespace std;

int main() {
	int N;
	int size[6];
	int T, P;
	int countT = 0;
	int countP = 0;
	int remainP = 0;
	cin >> N;

	for (int i = 0; i < 6; i++) {
		cin >> size[i];
	}
	cin >> T >> P;

	for (int i = 0; i < 6; i++) {
		if (size[i] % T == 0) {
			countT += size[i] / T;
		}
		else
			countT += (size[i] / T) + 1;
			
	}
	cout << countT<<"\n";
	countP = N / P;
	remainP = N % P;
	cout << countP <<" "<< remainP;
	return 0;
}