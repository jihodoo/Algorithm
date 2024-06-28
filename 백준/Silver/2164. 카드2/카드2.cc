#include <iostream>
#include <queue>

using namespace std;

int main() {
    int N;
    cin >> N;
    queue<int> q;
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }
    while (q.size() > 1) {
        q.pop();
        int a = q.front();
        q.push(a);
        q.pop();
    }
    cout << q.front();
    return 0;
}