#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string S;

int main() {
	cin >> S;
	vector<string> str;
	int n = S.size();
	for (int i = 0; i < S.size(); i++) {
		string a;
		for (int j = i; j < S.size(); j++) {
			a.push_back(S[j]);
		}
		str.push_back(a);
	}	
	sort(str.begin(), str.end());
	for (int i = 0; i < S.size(); i++) {
		cout << str[i] << "\n";
	}
	return 0;
}