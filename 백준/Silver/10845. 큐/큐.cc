#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N;
    cin >> N;
    queue<int> q;
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
                int a = q.front();
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
        if (inst == "front") {
            if (q.empty()) cout << -1 << "\n";
            else {
                cout << q.front() << "\n";
            }
        }
        if (inst == "back") {
            if (q.empty()) cout << -1 << "\n";
            else {
                cout << q.back() << "\n";
            }
        }
    }
    return 0;
}