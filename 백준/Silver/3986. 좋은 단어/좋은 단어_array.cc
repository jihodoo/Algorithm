#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    int answer = 0;

    while (N--) {
        string s;
        cin >> s;
        
        char arr[100000]; // 스택 대신 사용할 배열
        int top = -1;     // 스택의 top 역할

        for (char c : s) {
            if (top >= 0 && arr[top] == c) {
                top--;          // pop
            } else {
                arr[++top] = c; // push
            }
        }

        if (top == -1) answer++; // 배열이 비었으면 좋은 단어
    }

    cout << answer << "\n";
    return 0;
}
