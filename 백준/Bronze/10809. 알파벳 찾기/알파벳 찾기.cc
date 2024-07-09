#include <iostream>

using namespace std;

string S;
int alp[26];
int main() {
	cin >> S;
	for (int i = 0; i < 26; i++) {
		alp[i]--;
	}
	for (int i = 0; i < S.size(); i++) {
		if (alp[S[i]-'a']== -1) {
			alp[S[i] - 'a'] = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << alp[i] << " ";
	}
	return 0;
}