#include <iostream>
#include <algorithm>

using namespace std;

string S;

int main() {
	cin >> S;
	string tmp = S;
	reverse(S.begin(), S.end());
	if (tmp == S) cout << 1;
	else cout << 0;
	return 0;
}