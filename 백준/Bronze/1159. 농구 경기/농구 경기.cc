#include <iostream>

using namespace std;

int cnt[26]; int N; string name;
int check;

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> name;
		cnt[name[0] - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		if (cnt[i] >= 5) {
			check = 1;
			cout << char(i + 'a');
		}
	}
	if (!check) cout << "PREDAJA";
	return 0;
}