#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int V = 101;
int M, N, K;
int dy[4] = { -1,0,1,0 };
int dx[4] = { 0,1,0,-1 };
int a[V][V], visited[V][V];
int cnt, ret;
vector<int> arr;

void DFS(int y, int x) {
	cnt++;
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || ny >= M || nx < 0 || nx >= N) continue;
		if (a[ny][nx] == 0 && visited[ny][nx] == 0) {
			DFS(ny, nx);
		}
	}
}

int main() {
	cin >> M >> N >> K;
	for (int i = 0; i < K; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int x = x1; x < x2; x++) {
			for (int y = y1; y < y2; y++) {
				a[y][x] = 1;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (a[j][i] == 0 && visited[j][i] == 0) {
				cnt = 0;
				DFS(j, i);
				ret++;
				arr.push_back(cnt);
			}
		}
	}
	cout << ret << "\n";
	sort(arr.begin(), arr.end());
	for (auto it : arr)cout << it << " ";
	return 0;
}