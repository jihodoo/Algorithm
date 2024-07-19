#include <iostream>
#include <stack>
#include <string>
using namespace std;


int main() {
	while (true) {
		string text;
		getline(cin, text);
		if (text == ".") break;
		stack<char> st;
		int n = 0;

		for (int i = 0; i < text.size(); i++) {
			if (text[i] == '(' or text[i] == '[') {
				st.push(text[i]);
			}
			else if (text[i] == ')') {
				if (st.empty()) {
					n = 1;
					break;
				}
				else if (st.top() == '(') {
					st.pop();
				}
				else {
					n = 1;
					break;
				}
			}
			else if (text[i] == ']') {
				if (st.empty()) {
					n = 1;
					break;
				}
				else if (st.top() == '[') {
					st.pop();
				}
				else {
					n = 1;
					break;
				}
			}
		}
		if (n == 1 or !st.empty()) {
			cout << "no" << "\n";
			continue;
		}
		cout << "yes" << "\n";
	}
	return 0;
}