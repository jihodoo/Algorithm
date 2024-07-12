#include <iostream>
#include <vector>
using namespace std;

int N;
int nums[1000001];


int main() {
    cin >> N;

    for (int i = 1; i <= N; i++) {
        int a = i;
        int rest = 0;
        while (a > 0) {
            rest += a % 10;
            a = a / 10;
        }
        if (nums[i + rest] == 0) nums[i + rest] = i;
        else nums[i + rest] = min(nums[i + rest], i);
    }
    cout << nums[N];
    return 0;
}