#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define N_max 1001
#define M_max 10001

using namespace std;

int N, M, V;
vector<int> graph[N_max];
bool is_visit[N_max] = { false, };

void DFS(int node) {
    cout << node << " ";
    is_visit[node] = true;
    for (int i = 0; i < graph[node].size(); i++) {
        int next_node = graph[node][i];
        if (!is_visit[next_node]) {
            DFS(next_node);
        }
    }
}

void BFS(int node) {
    queue<int> q;
    q.push(node);
    is_visit[node] = true;

    while (!q.empty()) {
        int current = q.front();
        q.pop();
        cout << current << " ";
        
        for (int i = 0; i < graph[current].size(); i++) {
            int next_node = graph[current][i];
            if (!is_visit[next_node]) {
                q.push(next_node);
                is_visit[next_node] = true;
            }
        }
    }
}

int main() {
    cin >> N >> M >> V;
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (int i = 1; i <= N; i++) {  // 여기서는 1부터 N까지 정렬
        sort(graph[i].begin(), graph[i].end());
    }
    
    DFS(V);
    fill(is_visit, is_visit + N_max, false);  // 배열 초기화 간단화
    cout << "\n";
    BFS(V);

    return 0;
}
