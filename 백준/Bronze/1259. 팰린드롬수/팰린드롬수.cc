#include <iostream>
#include <string>
using namespace std;

int main() {

	while (true) {
		string test;
		cin >> test;
		if (test == "0") break;
		int L = 0;
		int R = test.size() - 1;

		while (L <= R) {
			if (test[L] == test[R]) {
				L++;
				R--;
			}
			else{
				cout << "no"<<"\n";
				break;
			}
		}
		if (L>R) cout << "yes"<<"\n";

	}
	return 0;
}