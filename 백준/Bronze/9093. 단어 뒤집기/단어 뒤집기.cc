#include <iostream>
#include <stack>
#include <string>

using namespace std;

int T;

int main() {
	cin >> T;
	cin.ignore();
	string text;
	stack<char> stack;
	while (T > 0) {
		getline(cin, text);
		text += ' ';
		for (int i = 0; i < text.size(); i++) {
			if (text[i] == ' ') {
				while (stack.empty() == 0) {
					char a = stack.top();
					cout << a;
					stack.pop();
				}
				cout << " ";
			}
			else {
				stack.push(text[i]);
			}
		}
		cout << "\n";
		T--;
	}
	return 0;
}