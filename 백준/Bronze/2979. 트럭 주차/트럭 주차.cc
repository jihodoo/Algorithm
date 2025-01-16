#include <iostream>

using namespace std;
int A, B, C;
int a1, a2, a3, b1, b2, b3;
int sum;
int cnt[101];

void park(int a, int b) {
	for (int i = a; i < b; i++) {
		cnt[i]++;
	}
}

int main() {
	cin >> A >> B >> C;
	cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
	park(a1, b1);
	park(a2, b2);
	park(a3, b3);
	for (int i : cnt) {
		if (i == 1) sum += A;
		if (i == 2) sum += 2 * B;
		if (i == 3) sum += 3 * C;
	}
	cout << sum;

	return 0;
}

/*1대 -> A 2대 -> 2B, 3대 -> 3C
1 2 3 4 5 6 7 8
1 2 3 3 2 1 1 
5 6 3 3 6 5 5  15 12 6 27 +6 = 33*/