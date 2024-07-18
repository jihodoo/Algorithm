#include <iostream>
#include <vector>
#define V_max 20001
using namespace std;

int K;
vector<int> graph[V_max];
bool is_visit[V_max] = { false , };
int is_Bipartite[V_max] = { 0, };
bool is_bipartite;

void reset() {
	for (int i = 1; i < V_max; i++) {
		graph[i].clear();
	}
	fill(begin(is_visit), end(is_visit), false);
	fill(begin(is_Bipartite), end(is_Bipartite), 0);
	is_bipartite = true;
}

void DFS(int node, int color) {
	is_visit[node] = true;
	is_Bipartite[node] = color;

	for (int i = 0; i < graph[node].size(); i++) {
		int next_node = graph[node][i];
		if (is_visit[next_node] == false) {
			DFS(next_node,-color);
		}
		else {
			if (is_Bipartite[next_node] == is_Bipartite[node]) {
				is_bipartite = false;
				return;
			}
		}
	}
}

int main() {
	cin >> K;
	for (int i = 0; i < K; i++) {
		reset();
		int V, E;
		cin >> V >> E;
		for (int i = 0; i < E; i++) {
			int a, b;
			cin >> a >> b;
			graph[a].push_back(b);
			graph[b].push_back(a);
		}
		for (int i = 1; i <= V; i++) {
			if (!is_visit[i]) {
				DFS(i, 1);
				if (!is_bipartite) break;
			}
		}
		if (!is_bipartite) {
			cout << "NO" << "\n";
		}
		else {
			cout << "YES" << "\n";

		}
	}
	return 0;
}