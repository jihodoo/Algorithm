#include <iostream>
#include <stack>
using namespace std;

int N, cnt;
int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        stack<char> st;
        string s;
        cin >> s;
        for (int j = 0; j < s.size(); j++) {
            if (st.empty()) st.push(s[j]);
            else if (st.top() == s[j]) st.pop();
            else st.push(s[j]);
        }
        if (st.empty()) cnt++;
    }
    cout << cnt;
    return 0;
}