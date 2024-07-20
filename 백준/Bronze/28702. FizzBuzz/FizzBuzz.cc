#include <iostream>
#include <vector>
#include <cctype>
#include <string>
using namespace std;

int main() {
    vector<string> text(3);
    for (int i = 0; i < 3; i++) {
        cin >> text[i];
    }
    for (int i = 0; i < 3; i++) {
        if (isdigit(text[i][0])) {
            int num = stoi(text[i]) + 3 -i;
            if (num % 3 == 0 and num % 5 == 0) {
                cout << "FizzBuzz";
            }
            else if (num % 3 == 0 and num % 5 != 0) {
                cout << "Fizz";
            }
            else if (num % 3 != 0 and num % 5 == 0) {
                cout << "Buzz";
            }
            else {
                cout << num;
            }
            return 0;
        }
   }
    return 0;
}