#include <iostream>
#include <queue>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    queue<int> q;
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }
    cout << "<";
    
    for (int i = 0; i < N-1; i++) {
        int a = 0;
        while (true) {
            a++;
            if (a == K) {
                int A = q.front();
                q.pop();
                cout << A << ", ";
                break;
            }
            else {
                int A = q.front();
                q.pop();
                q.push(A);
            }
        }
    }
    cout << q.front() << ">";

    return 0;
}