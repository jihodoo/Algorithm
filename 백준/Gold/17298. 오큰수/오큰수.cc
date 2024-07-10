#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int N;
vector<int> nums;

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		nums.push_back(a);
	}
	stack<int> st;
	stack<int> result;
	st.push(-1);
	result.push(st.top());
	st.push(nums[N - 1]);
	for (int i = N - 2; i >= 0; i--) {
		if (nums[i] < st.top()) {
			result.push(st.top());
			st.push(nums[i]);
		}
		else {
			while (nums[i] >= st.top()) {
				st.pop();
				if (st.empty()) {
					st.push(-1);
					break;
				}
			}
			result.push(st.top());
			st.push(nums[i]);
		}
	}
	for (int i = 0; i < N; i++) {
		cout << result.top() << " ";
		result.pop();
	}
	return 0;
}