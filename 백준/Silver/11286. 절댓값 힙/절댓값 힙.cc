#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

int N;

struct Compare {
    bool operator()(int a, int b) {
        if (abs(a) == abs(b)) return a > b;
        else return abs(a) > abs(b);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    priority_queue<int,vector<int>, Compare> pq;
    for (int i = 0; i < N; i ++ ) {
        int a;
        cin >> a;
        if (a) pq.push(a);
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