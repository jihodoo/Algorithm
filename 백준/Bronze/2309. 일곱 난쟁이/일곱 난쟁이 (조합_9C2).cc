#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//9C2 --> 이중 for문 사용

int n = 9;
vector<int> input;

int main() {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        input.push_back(a);
        sum += a;
    }

    int target = sum - 100;
    bool done = false;

    vector<int> result;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (input[i] + input[j] == target) {
                for (int k = 0; k < n; k++) {
                    if ((k != i) && (k != j)) {
                        result.push_back(input[k]);
                    }
                }
                done = true;
            }
            if (done) break;
        }
        if (done) break;
    }

    sort(result.begin(), result.end());
    for (int i : result)cout << i << "\n";

    return 0;
}
