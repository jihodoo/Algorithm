#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool sort_letter(string a, string b) {
	if (a.length() < b.length()) return 1;
	if (a.length() > b.length()) return 0;
	else return a < b;

}
vector<string> letter;
int main() {
	int num;
	cin >> num;

	for (int i = 0; i < num; i++) {
		string a;
		cin >> a;
		if (find(letter.begin(), letter.end(), a) == letter.end()) {
			letter.push_back(a);
		}

		
		
		
	}
	std::sort(letter.begin(), letter.end(),sort_letter);
	for (int i = 0; i < letter.size(); i++) {
		cout << letter[i] << "\n";
		
	}
	

	return 0;
}