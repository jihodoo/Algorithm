#include <iostream>
#include <vector>
using namespace std;

int T;
const int V = 51;
int dy[4] = {-1,0,1,0};
int dx[4] = { 0,1,0,-1 };
int a[V][V], visited[V][V];
int N, M, K;

void DFS(int y, int x) {
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || ny >= N || nx < 0 || nx >= M || a[ny][nx] == 0) continue;
		if (visited[ny][nx]) continue;
		DFS(ny, nx);
	}
	return;
}

int main() {
	cin >> T;
	for (int i = 0; i < T; i++) {
		fill(&a[0][0], &a[0][0] + 51 * 51, 0);
		fill(&visited[0][0], &visited[0][0] + 51 * 51, 0);
		cin >> M >> N>> K;
		int cnt = 0;

		for (int i = 0; i < K; i++) {
			int p, q;
			cin >> p >> q;
			a[q][p] = 1;
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (a[i][j] == 1 && visited[i][j] == 0) {
					DFS(i, j);
					cnt++;
				}
			}
		}
		cout << cnt << "\n";
	}
	return 0;
}