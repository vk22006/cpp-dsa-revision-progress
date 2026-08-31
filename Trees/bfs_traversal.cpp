#include <iostream>
#include <vector>
#include <queue>

void bfs(int start, const std::vector<std::vector<int>>& tree) {
    std::vector<bool> visited(tree.size(), false);
    std::queue<int> q;

    visited[start] = true;
    q.push(start);

    while(!q.empty()) {
        int node = q.front();
        q.pop();

        std::cout << node << " ";

        for(int neighbour : tree[node]) {
            if(!visited[neighbour]) {
                visited[neighbour] = true;
                q.push(neighbour);
            }
        }
    }
}

int main() {
    int N = 5;
    std::vector<std::vector<int>> tree(N);
    for(int i=0; i<N-1; i++) {
        int u,v;
        std::cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    bfs(0, tree);

    return 0;
}