#include <iostream>
#include <vector>

void dfs(int node, int parent, const std::vector<std::vector<int>>& tree) {
    std::cout << node << " ";

    for(int neighbour : tree[node]) {
        if(neighbour != parent) {
            dfs(neighbour, node, tree);
        }
    }
}

int main() {
    int size = 5;

    std::vector<std::vector<int>> tree(size);
    for(int i=0; i<size-1; i++) {
        int u,v;
        std::cin >> u >> v;

        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    dfs(0, -1, tree);

    return 0;
}