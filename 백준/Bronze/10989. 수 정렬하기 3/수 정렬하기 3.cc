#include <iostream>
#include <vector>
using namespace std;

int N;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> N;
    vector<int> count(10001);
    vector<int> result;
    int sum = 0;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        count[a]++;
    }
    for (int i = 0; i < 10001; i++) {
        while (count[i] > 0) {
            cout << i << "\n";
            count[i]--;
        }
    }
    
    return 0;
}