#include <iostream>
#include <cstring>
using namespace std;

int T, M, N,B;
int dy[] = {-1,0,1,0};
int dx[] = {0,1,0,-1};
int a[51][51], visited[51][51];

void DFS(int y, int x) {
    visited[y][x] = 1;
    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < 0 || ny >= N || nx < 0 || nx >= M) continue;
        if (a[ny][nx] && visited[ny][nx] == 0) {
            DFS(ny, nx);
        }
    }
    return;
}


int main() {
    cin >> T;
    for (int k = 0; k < T; k++) {
        int cnt = 0;

        cin >> M >> N >> B;

        memset(a, 0, sizeof(a));
        memset(visited, 0, sizeof(visited));

        for (int i = 0; i < B; i++) {
            int r, s;
            cin >> r >> s;
            a[s][r] = 1;
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (a[i][j] && visited[i][j] == 0) {
                    DFS(i, j);
                    cnt++;
                }
            }
        }

        cout << cnt << "\n";

    }

    return 0;
}
