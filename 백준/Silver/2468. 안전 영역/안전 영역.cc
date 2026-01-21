#include <iostream>
#include <cstring>
using namespace std;

int N;
int a[101][101], visited[101][101];
int dy[] = { -1,0,1,0 };
int dx[] = { 0,1,0,-1 };


void check(int y, int x, int h) {
    visited[y][x] = 1;
    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < 0 || ny >= N || nx < 0 || nx >= N) continue;
        if (a[ny][nx] > h && visited[ny][nx] == 0) {
            check(ny, nx, h);
        }
    }
    return;
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> a[i][j];
        }
    }

    int m = 0;
    int cnt = 0;

    for (int k = 0; k < 101; k++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (a[i][j] > k && visited[i][j] == 0) {
                    check(i, j, k);
                    cnt++;
                }
            }
        }
        if (cnt > m) m = cnt;
        cnt = 0;
        memset(visited, 0, sizeof(visited));
    }

    cout << m;


    return 0;
}