#include <iostream>
#include <queue>
#include <functional>
#include <vector>
using namespace std;

int N;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<int, vector<int>, greater<int>> pq;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        if (a) {
            pq.push(a);
        }
        else {
            if (pq.empty()) cout << 0 << "\n";
            else {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
    }
    return 0;
}