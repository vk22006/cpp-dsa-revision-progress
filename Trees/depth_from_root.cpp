#include <iostream>
#include <vector>
#include <queue>

void bfs_depthFrmRoot(int start, const std::vector<std::vector<int>>& tree) {
    std::vector<int> depth(tree.size(), -1);
    std::queue<int> q;

    depth[start] = 0;
    q.push(start);

    while(!q.empty()) {
        int node = q.front();
        q.pop();

        for(int neighbour : tree[node]) {
            if(depth[neighbour]==-1) {
                depth[neighbour] = depth[node] + 1;
                q.push(neighbour);
            }
        }
    }

    for(int i=0; i<tree.size(); i++) {
        std::cout << "Node " << i << " depth: "
            << depth[i] << "\n";
    }
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

    bfs_depthFrmRoot(0, tree);
}

int main() {
    solve();
    return 0;
}