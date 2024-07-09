#include <iostream>
#include <string>
using namespace std;

int main() {
	string A, B, C, D;
	cin >> A>>B>>C>>D;
	cout<<stoull(A + B) + stoull(C + D); //string -> longlong
	return 0;
}