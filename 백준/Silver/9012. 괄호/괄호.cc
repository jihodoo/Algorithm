#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        string test;
        cin >> test;
        stack<char> s;
        int n = 0;
        for (int i = 0; i < test.size(); i++) {
            if (test[i] == '(') {
                s.push('(');
           }
            if (test[i] == ')') {
                if (s.empty()) { 
                    n = 1;
                    break;
                }
                else {
                    s.pop();
                }
            }
        }
        if (n == 1 || s.empty() == 0) cout << "NO" << "\n";
        else if (s.empty()) cout << "YES" << "\n";
    }
    return 0;
}