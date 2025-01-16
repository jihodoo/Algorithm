#include <iostream>
#include <string>

using namespace std;

int a[26]; string S;
//'a' = 97

int main() {
	cin >> S;
	for (char i : S) a[i - 97]++;
	for (int i : a) cout << i << " ";
	return 0;
}