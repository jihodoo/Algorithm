#include <iostream>
#include <stack>
#include <map>

using namespace std;

string infix;

int main() {
    cin >> infix;
    map<char, int> in_stack_priority;
    map<char, int> in_coming_priority;
    stack<char> op;

    in_stack_priority['('] = 8;
    in_stack_priority['*'] = 1;
    in_stack_priority['/'] = 1;
    in_stack_priority['+'] = 2;
    in_stack_priority['-'] = 2;

    in_coming_priority['('] = 0;
    in_coming_priority['*'] = 1;
    in_coming_priority['/'] = 1;
    in_coming_priority['+'] = 2;
    in_coming_priority['-'] = 2;

    for (int i = 0; i < infix.size(); i++) {
        if (infix[i] >= 'A' && infix[i] <= 'Z') {
            cout << infix[i];
        }
        else {
            if (op.empty()) op.push(infix[i]);
            else if (infix[i] == ')') {
                while (op.top() != '(') {
                    char a = op.top();
                    cout << a;
                    op.pop();
                }
                op.pop();
            }
            else{
                if (in_coming_priority[infix[i]] >= in_stack_priority[op.top()]) {
                    while (in_coming_priority[infix[i]] >= in_stack_priority[op.top()]) { 
                        char a = op.top();
                        cout << a;
                        op.pop();
                        if (op.empty()) break;
                    }
                    op.push(infix[i]);
                }
                else
                    op.push(infix[i]);
            }
        }
    }
    while (!op.empty()) {
        cout << op.top();
        op.pop();
    }
    return 0;
}