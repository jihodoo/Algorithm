#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int n;
vector<int> nums;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		nums.push_back(a);
	}
	stack<int> sequence;
	vector<char> result;
	
	sequence.push(0);
	int a = 1;
	int b = 0;
	for (int i = 0; i < n; i++) {
		while (true) {
			if (sequence.top() == nums[i]) {
				sequence.pop();
				result.push_back('-');
				break;
			}
			else if (sequence.top() < nums[i]) {
				sequence.push(a);
				result.push_back('+');
				a++;
				if (a > nums[i]+1) { 
					b = 1;
					break;
				}
			}
			else if (sequence.top() > nums[i]) {
				sequence.pop();
				result.push_back('-');
			}
		}
		if (b == 1) {
			break;
		}
	}
	if (b == 1) {
		cout << "NO";
	}
	else {
		for (int i = 0; i < result.size(); i++) {
			cout << result[i] << "\n";
		}
	}
	return 0;
}