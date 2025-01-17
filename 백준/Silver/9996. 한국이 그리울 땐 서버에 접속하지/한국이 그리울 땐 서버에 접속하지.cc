#include <iostream>
#include <string>

using namespace std;

int N; string pattern; string tmp;

int main() {
	ios::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
	cin >> N >> pattern;
	int d = pattern.find('*');
	string a1 = pattern.substr(0, d);
	string a2 = pattern.substr(d + 1);
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		if (tmp.size() < a1.size() + a2.size()) cout << "NE\n";
		else if (a1 == tmp.substr(0, a1.size())  && a2 == tmp.substr(tmp.size()-a2.size())) {
			cout << "DA" << "\n";
		}
		else cout << "NE\n";
	} 
	return 0;
}