#include <iostream>
#include <vector>

using namespace std;

int N;

int check(vector<string> v) {
	int max_R = 0;
	for (int i = 0; i < N; i++) {
		int tmp_row = 1;
		int max_row = 1;
		for (int j = 1; j < N; j++) {
			if (v[i][j] == v[i][j - 1]) {
				tmp_row++;
				if (tmp_row > max_row) max_row = tmp_row;
			}
			else {
				tmp_row = 1;
			}
		}
		if (max_row > max_R) max_R = max_row;
	}

	int max_C = 0;
	for (int i = 0; i < N; i++) {
		int tmp_column = 1;
		int max_column = 1;
		for (int j = 1; j < N; j++) {
			if (v[j][i] == v[j - 1][i]) {
				tmp_column++;
				if (tmp_column > max_column) max_column = tmp_column;
			}
			else {
				tmp_column = 1;
			}
		}
		if (max_column > max_C) max_C = max_column;
	}
	int max_ans = max(max_R, max_C);
	return max_ans;
}

int main() {
	cin >> N;
	vector<string> v(N);
	int ans = 0;
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < N; i++) {
		for (int j = 1; j < N; j++) {
			swap(v[i][j], v[i][j - 1]);
			if (check(v) > ans) ans = check(v);
			swap(v[i][j], v[i][j - 1]);
			swap(v[j][i], v[j - 1][i]);
			if (check(v) > ans) ans = check(v);
			swap(v[j][i], v[j - 1][i]);
		}
	}
	cout << ans;
	
	return 0;
}