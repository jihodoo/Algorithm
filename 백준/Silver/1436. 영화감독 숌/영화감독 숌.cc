#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;
	int title = 666;
	int count = 0;

	while (true) {

		string titles = to_string(title);
		if (titles.find("666") != string::npos) {
			count++;
		}
		if (count == N) break;

		title += 1;

	}
	cout << title;

	return 0;
}