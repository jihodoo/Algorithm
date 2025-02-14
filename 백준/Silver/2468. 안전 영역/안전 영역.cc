#include <iostream>
using namespace std;

int N;
const int V = 101;
int a[V][V], visited[V][V], water[V][V];
int dy[4] = { -1,0,1,0 };
int dx[4] = { 0,1,0,-1 };
int cnt, M;

void check(int y, int x) {
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || ny >= N || nx < 0 || nx >= N) continue;
		if (water[ny][nx] == 0 && visited[ny][nx] == 0) check(ny, nx);
	}
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> a[i][j]; 
		}
	}
	for (int i = 0; i <= 100; i++) {
		fill(&visited[0][0], &visited[0][0] + V * V, 0);
		fill(&water[0][0], &water[0][0] + V * V, 0);
		cnt = 0;
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				if (a[j][k] <= i) water[j][k] = 1;
			}
		}
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				if (water[j][k] == 0 && visited[j][k] == 0) {
					check(j,k);
					cnt++;
				}
			}
		}
		if (cnt > M) M = cnt;
	}
	cout << M;

	return 0;
}