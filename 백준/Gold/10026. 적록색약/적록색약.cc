#include <iostream>
#include <vector>
#include <string.h>
#define MAX 102
using namespace std;

int N;
bool is_visit[MAX][MAX] = { false , };
char arr[MAX][MAX];
int ans_color, ans_noncolor;
int p;

void check_color(int x, int y);

void check() {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (is_visit[i][j] == false) {
                ans_color++;
            }
            check_color(i, j);
        }
    }
    memset(is_visit, false, sizeof(is_visit));

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (arr[i][j] == 'G') arr[i][j] = 'R';
        }
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (is_visit[i][j] == false) {
                ans_noncolor++;
            }
            check_color(i, j);
        }
    }
}

void check_color(int x, int y) {
    if (is_visit[x][y]) return;
    is_visit[x][y] = true;
    char color = arr[x][y];
    if (arr[x][y -1] == color) {
        check_color(x, y -1);
    }
    if (arr[x + 1][y] == color) {
        check_color(x+1, y);
    }
    if (arr[x][y + 1] == color) {
        check_color(x, y + 1);
    }
    if (arr[x - 1][y] == color) {
        check_color(x - 1, y);
    }
    
}

int main() {
    cin >> N;

    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            arr[i][j] = 'X';
        }
    }
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> arr[i][j];
        }
    }
    
    check();
    cout << ans_color<<" "<<ans_noncolor;
    return 0;
}