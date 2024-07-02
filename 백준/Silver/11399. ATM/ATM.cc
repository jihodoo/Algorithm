#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int N, P,sum;
vector<int> p;

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> P;
        p.push_back(P);
    }
    sort(p.begin(), p.end());
    int n = N;
    for (int i = 0; i < N; i++) {
        sum = sum + p[i]*n;
        n--;
    }
    cout << sum;
    return 0;
}