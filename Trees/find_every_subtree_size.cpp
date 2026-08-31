/*
Find Every Subtree Size:
In a given tree, find the size of all of its possible subtrees in it.
*/

#include <iostream>
#include <vector>

void dfs_everySubtreeCount(int node, int parent,
        const std::vector<std::vector<int>>& tree,
        std::vector<int>& subtreeSizes) {
            subtreeSizes[node] = 1;
            for(int neighbour : tree[node]) {
                if(neighbour != parent) {
                    dfs_everySubtreeCount(neighbour, node, tree, subtreeSizes);
                    subtreeSizes[node] += subtreeSizes[neighbour];
                }
            }
        }

void solve() {
    int size = 5;
    std::vector<std::vector<int>> tree(size);
    std::vector<int> subtreeSizes(size);
    for(int i=0; i<size-1; i++) {
        int u,v;
        std::cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    dfs_everySubtreeCount(0, -1, tree, subtreeSizes);

    for(int i=0; i<size; i++) {
        std::cout << "Node " << i << ": " << subtreeSizes[i] << "\n";
    }
}

int main() {
    solve();
    return 0;
}