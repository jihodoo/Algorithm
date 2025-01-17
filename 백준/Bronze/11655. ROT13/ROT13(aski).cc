#include <iostream>
#include <string>

using namespace std;

string text;

int main() {
	getline(cin, text);
	for (char s : text) {
		if (s >= 'A' && s <= 'Z'){
			if (s + 13 >= 'A' && s + 13 <= 'Z') {
				s += 13;
			}
			else s -= 13;
		}
		if (s >= 'a' && s <= 'z') {
			if (s + 13 >= 'a' && s + 13 <= 'z') {
				s += 13;
			}
			else s -= 13;			
		}
		cout << s;
	}
	return 0;
}
