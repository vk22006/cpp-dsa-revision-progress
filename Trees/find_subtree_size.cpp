/*
Find Size of a Subtree:
Consider,
        0
       / \
      1   2
     / \
    3   4
Where subtree of node 1 is,
      1
     / \
    3   4
Count of subtree of node 1 = 3

Likewise, we need to count the subtree of a given node.

We will use DFS here
*/

#include <iostream>
#include <vector>

int dfs_nodeCount(int node, int parent, const std::vector<std::vector<int>>& tree) {
    int size = 1;
    for(int neighbour : tree[node]) {
        if(neighbour != parent) {
            size += dfs_nodeCount(neighbour, node, tree);
        }
    }
    return size;
}

void solve() {
    int size = 5;
    std::vector<std::vector<int>> tree(size);
    for(int i=0; i<size-1; i++) {
        int u,v;
        std::cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    int subtreeCount = dfs_nodeCount(1, 0, tree);

    std::cout << subtreeCount;
}

int main() {
    solve();
    return 0;
}
