#include <iostream>
#include <deque>

using namespace std;

int N;

int main() {
    cin >> N;
    deque<int> DQ;
    for (int i = 0; i < N; i++) {
        string text;
        cin >> text;
        if (text == "push_front") {
            int a;
            cin >> a;
            DQ.push_front(a);
        }
        else if (text == "push_back") {
            int a; 
            cin >> a;
            DQ.push_back(a);
        }
        else if (text == "pop_front") {
            if (DQ.empty()) cout << "-1" << "\n";
            else {
                int a = DQ.front();
                DQ.pop_front();
                cout << a << "\n";
            }
        }
        else if (text == "pop_back") {
            if (DQ.empty()) cout << "-1" << "\n";
            else {
                int a = DQ.back();
                DQ.pop_back();
                cout << a << "\n";
            }
        }
        else if (text == "size") {
            cout << DQ.size() << "\n";
        }
        else if (text == "empty") {
            if (DQ.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else if (text == "front") {
            if (DQ.empty()) cout << -1 << "\n";
            else cout << DQ.front()<<"\n";
        }
        else if (text == "back") {
            if (DQ.empty()) cout << -1 << "\n";
            else cout << DQ.back()<<"\n";
        }
    }
    return 0;
}