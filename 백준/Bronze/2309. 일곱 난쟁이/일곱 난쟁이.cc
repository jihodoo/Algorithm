#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n = 9;
vector<int> arr(9);

int main() {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr.begin(), arr.end());
    while (true) {
        for (int i = 0; i < n-1; i++) {
            for (int j = i+1; j < n; j++) {
                int add = arr[i] + arr[j];
                if (sum - add == 100) {
                    for (int k = 0; k < n; k++) {
                        if (k == i || k == j) continue;
                        else cout << arr[k] << "\n";
                    }
                    return 0;
                }
            }
        }
    }
    return 0;
}