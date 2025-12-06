#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//9C7 --> 재귀 combi 사용

int n = 9, k = 7;
vector<int> input;
bool done = false;

void combi(int start, vector<int> v) {
    if (v.size() == k) {
        vector<int> b;
        int sum = 0;
        for (int i : v) sum += input[i];
        if (sum == 100) {
            for (int i : v) b.push_back(input[i]);
            sort(b.begin(), b.end());
            for (int i : b) cout << i << "\n";
            done = true;
        }
        return;
    }
    for (int i = start + 1; i < n; i++) {
        v.push_back(i);
        combi(i, v);
        if (done == true) return;
        v.pop_back();
    }

}


int main() {
    for (int i = 0; i < 9; i++) {
        int a;
        cin >> a;
        input.push_back(a);
    }

    vector<int> result;
    combi(-1, result);

    return 0;
}
