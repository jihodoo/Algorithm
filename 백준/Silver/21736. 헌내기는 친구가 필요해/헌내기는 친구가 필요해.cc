#include <iostream>
#include <vector>
#define MAX 601
using namespace std;

int N, M,I_x,I_y;
vector<vector<char>> v(MAX, vector<char>(MAX));
bool is_visit[MAX][MAX] = {false,};
int ans;

void find(int x, int y) {
    is_visit[x][y] = true;
    if (v[x][y] == 'P') {
        ans++;
    }
    if (v[x][y] == 'X') {
        return;
    }
    if (y - 1 >= 0 and is_visit[x][y-1] == false) {
        find(x, y - 1); 
    }
    if (x + 1 < N and is_visit[x+1][y] == false) {
        find(x + 1, y);
    } 
    if (y + 1 < M and is_visit[x][y + 1] == false) {
        find(x, y + 1);
    }
    if (x - 1 >= 0 and is_visit[x-1][y] == false) {
        find(x - 1, y);
    }
    return;
}


int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> v[i][j];
            if (v[i][j] == 'I') {
                I_x = i;
                I_y = j;
            }
        }
    }
    find(I_x, I_y);
    if (ans == 0) cout << "TT";
    else cout << ans;
    return 0;
}