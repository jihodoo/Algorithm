#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int N;
string Postfix;
vector<int> operand(26);

int main() {
    cin >> N;
    cin >> Postfix;
    stack<double> st;
    for (int i = 0; i < N; i++) {
        cin >> operand[i];
    }
    for (int i = 0; i < Postfix.size(); i++) {
        if (Postfix[i] >= 'A' && Postfix[i] <= 'Z') {
            st.push(operand[Postfix[i] - 'A']);
        }
        else {
            double a = st.top();
            st.pop();
            double b = st.top();
            st.pop();
            if (Postfix[i] == '*') st.push(b * a);
            if (Postfix[i] == '+') st.push(b + a);
            if (Postfix[i] == '/') st.push(b / a);
            if (Postfix[i] == '-') st.push(b - a);  
        }
    }
    cout << fixed;
    cout.precision(2);
    cout<<st.top();
    
    return 0;
}