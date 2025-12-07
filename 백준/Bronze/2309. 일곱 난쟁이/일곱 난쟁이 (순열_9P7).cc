#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//9P7 --> next_permutation 사용

int n = 9, k = 7;
vector<int> input;
int main() {
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        input.push_back(a);
    }
    sort(input.begin(), input.end());

    do {
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += input[i];
        }
        if (sum == 100) {
            for (int i = 0; i < k; i++) {
                cout << input[i] << "\n";
            }
            return 0;
        }
    } while (next_permutation(input.begin(), input.end()));


    return 0;
}
