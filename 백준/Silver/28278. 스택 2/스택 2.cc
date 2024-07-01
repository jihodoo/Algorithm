#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    stack<int> s;

    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;

        if (a == 1) {
            int X;
            cin >> X;
            s.push(X);
        }
        else if (a == 2) {
            if (s.empty()) {
                cout << -1 << "\n";
            } else {
                cout << s.top() << "\n";
                s.pop();
            }
        }
        else if (a == 3) {
            cout << s.size() << "\n";
        }
        else if (a == 4) {
            cout << (s.empty() ? 1 : 0) << "\n";
        }
        else if (a == 5) {
            cout << (s.empty() ? -1 : s.top()) << "\n";
        }
    }
    
    return 0;
}
