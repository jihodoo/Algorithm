#include <iostream>
#include <queue>

using namespace std;

const int V = 101;
int N, M;
int a[V][V];
int visited[V][V];
int dy[4] = { -1,0,1,0 };
int dx[4] = { 0,1,0,-1 };

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string t;
		cin >> t;
		for (int j = 0; j < t.size(); j++) {
			a[i][j] = int(t[j]-48);
		}
	}
	visited[0][0] = 1;
	queue<pair<int,int>> q;
	q.push({ 0,0 });
	while (q.size()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (ny < 0 || ny >= N || nx < 0 || nx >= M || a[ny][nx] == 0) continue;
			if (visited[ny][nx] == 0) {
				visited[ny][nx] = visited[y][x] + 1;
				q.push({ ny,nx });
			}
		}
	}
	cout << visited[N-1][M-1];

}