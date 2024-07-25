#include <iostream>
#include <vector>
#define MAX 129
using namespace std;

int white = 0;
int blue = 0;
vector<vector<int>> v(MAX, vector<int>(MAX));


void divide(int x, int y, int z) {
    bool check = false;
    int color = v[x][y];
    for (int i = x; i < x+z; i++) {
        for (int j = y; j < y+z; j++) {
            if (v[i][j] != color) {
                check = true;
                break;
            }
        }
    }
    if (check) {
        divide(x, y, z / 2);
        divide(x, y + z / 2, z / 2);
        divide(x + z / 2, y, z / 2);
        divide(x + z / 2, y + z / 2, z / 2);
    }
    else {
        if (color == 1) blue++;
        else white++;
    }
}

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> v[i][j];
        }
    }
    divide(0,0,N);
    cout << white << "\n" << blue;
    return 0;
}