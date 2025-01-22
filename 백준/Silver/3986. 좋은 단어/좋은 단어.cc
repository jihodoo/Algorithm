#include <iostream>
#include <stack>

using namespace std;

int N;
string s;


int main() {
	cin >> N;
	int cnt = 0;

	for (int i = 0; i < N; i++) {
		stack<int> st;
		cin >> s;
		if (s.size() & 1) continue;
		st.push(s[0]);
		for (int j = 1; j < s.size(); j++) {
			if (st.empty()) {
				st.push(s[j]);
				continue;
			}
			if (st.top() == s[j]) st.pop();
			else {
				st.push(s[j]);
			}
		}
		if (st.empty()) cnt++;
	}
	cout << cnt << "\n";
	return 0;
}