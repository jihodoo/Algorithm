#include <iostream>
#include <stack>
#include <string>
#include <queue>
using namespace std;

int main() {
	string S;
	getline(cin, S);
	queue<char> text_bracket;
	stack<char> text;
	int a = 0;
	int n = 0;
	while(true) {
		if (n == 1) break;
		if (S[a] == '<') {
			while (true) {
				if (S[a] == '>') {
					text_bracket.push(S[a]);
					while (text_bracket.empty() == 0) {
						cout << text_bracket.front();
						text_bracket.pop();
					}
					a++;
					break;
				}
				else {
					text_bracket.push(S[a]);
					a++;
				}
			}
		}
		while (true) {
			if (S[a] == '<') {
				while (text.empty() == 0) {
					cout << text.top();
					text.pop();
				}
				break;
			}
			if (a == S.length()) {
				while (text.empty() == 0) {
					cout << text.top();
					text.pop();
				}
				n = 1;
				break;
			}
			if (S[a] == ' ') {
				while (text.empty() == 0) {
					cout << text.top();
					text.pop();
				}
				cout << " ";
				a++;
			}
			else {
				text.push(S[a]);
				a++;
			}
		}

	}
	return 0;
}