#include <iostream>
#include <vector>

#define N_max 1001

using namespace std;

int N, M;
vector<int> graph[N_max];
bool is_visit[N_max] = { false, };

void DFS(int node) {
    is_visit[node] = true;
    for (int i = 0; i < graph[node].size(); i++) {
        int next_node = graph[node][i];
        if (is_visit[next_node] == false) {
            DFS(next_node);
        }
    }
}



int main() {
    cin >> N >> M;
    int ans = 0; 

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);

    }

    for (int i = 1; i <= N; i++) {
        if (is_visit[i] == false) {
            DFS(i);
            ans++;
        }
    }

    cout << ans;

    return 0;
}