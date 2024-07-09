#include <iostream>
#include <string>
using namespace std;

int main() {
	string S;

	while (getline(cin, S)){
		int small = 0;
		int big = 0;
		int num = 0;
		int space = 0;
		for (int i = 0; i < S.size(); i++) {
			if (S[i] >= 'a' && S[i] <= 'z') small++;
			else if (S[i] >= 'A' && S[i] <= 'Z') big++;
			else if (S[i] >= '0' && S[i] <= '9') num++;
			else if (S[i] == ' ') space++;
		}
		cout << small << " " << big << " " << num << " " << space<<"\n";
	}
	return 0;
}