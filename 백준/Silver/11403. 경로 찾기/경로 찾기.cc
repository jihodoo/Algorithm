#include <iostream>
#include <vector>
#include <cstring>
#define MAX 101
using namespace std;

int N;
vector<int> graph[MAX];
bool is_visit[MAX] = { false, };
bool found = false;

void find(int x, int y) {
    for (size_t i = 0; i < graph[x].size(); i++) {
        if (is_visit[graph[x][i]] == false) {
            is_visit[graph[x][i]] = true;
            if (graph[x][i] == y) {
                found = true;
                return;
            }
            else {
                find(graph[x][i], y);
            }
       }
    }
}

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            int a;
            cin >> a;
            if (a == 1) {
                graph[i].push_back(j);
            }
        }
    }
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            find(i, j);
            if (found == true) {
                cout << 1 << " ";
            }
            else {
                cout << 0 << " ";
            }
            memset(is_visit, false, sizeof(is_visit));
            found = false;
        }
        cout << "\n";
    }
    return 0;
}