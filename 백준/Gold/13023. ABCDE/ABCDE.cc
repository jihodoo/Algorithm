#include <iostream>
#include <vector>
#define N_max 2001
#define M_max 2001

using namespace std;

int N, M;
vector<int> graph[N_max];
bool visit[N_max] = { false , };
int possible = 0;


void DFS(int node, int depth) {
    if (depth == 4) {
        possible = 1;
        return;
    }
    visit[node] = true;

    for (int i = 0; i < graph[node].size(); i++) {
        int next_node = graph[node][i];
        if (visit[next_node] == false) {
            DFS(next_node, depth + 1);
            visit[next_node] = false;

        }
    }
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (int i = 0; i < N; i++) {
        DFS(i, 0);
        visit[i] = false;
        if (possible == 1) {
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}