#include <iostream>
#include <stack>
using namespace std;




int main() {
    int N;
    cin >> N;
    stack<int> q;
    for (int i = 0; i < N; i++) {
        string inst;
        cin >> inst;
        if (inst == "push") {
            int n;
            cin >> n;
            q.push(n);
        }
        if (inst == "pop") {
            if (q.empty()) cout << -1 << "\n";
            else {
                int a = q.top();
                q.pop();
                cout << a << "\n";
            }
        }
        if (inst == "size") {
            cout << q.size() << "\n";
        }
        if (inst == "empty") {
            if (q.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        if (inst == "top") {
            if (q.empty()) cout << -1 << "\n";
            else {
                cout << q.top() << "\n";
            }
        }
    }
    return 0;
}