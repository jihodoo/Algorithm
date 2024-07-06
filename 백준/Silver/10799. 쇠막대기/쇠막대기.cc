#include <iostream>
#include <stack>
using namespace std;

string stick;

int main() {
    cin >> stick;
    int sum = 0;
    stack<char> S;
    for (int i = 0; i < stick.length(); i++) {
        if (stick[i] == '(') {
            S.push('(');
        }
        else if ((stick[i - 1] == '(') && (stick[i] == ')')) {
            sum += S.size() - 1;
            S.pop();
        }
        else if ((stick[i - 1] == ')') && (stick[i] == ')')) {
            sum += 1;
            S.pop();
        }
    }
    cout << sum;
    return 0;
}
