#include <iostream>
#include <string>
using namespace std;

int main() {
	string S;
	getline(cin, S);
	char tmp;
	for (int i = 0; i < S.size(); i++) {
		tmp = S[i];
		if (isalpha(S[i])) {
			if (islower(tmp) && S[i] > 'm') S[i] -= 13;
			else if (isupper(tmp) && S[i] > 'M') S[i] -= 13;
			else S[i] += 13;
		}
		cout << S[i];
	}
	return 0;
}