#include <iostream>
#include <vector>

int main() {
    int size = 5;
    std::vector<std::vector<int>> tree(size);

    for(int i=0; i<size-1; i++) {
        int u, v;
        std::cin >> u >> v;

        //Since its undirected
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    for(int i=0; i<size-1; i++) {
        std::cout << i << " ";
        for(int j=0; j<tree[i].size(); j++) {
            std::cout << tree[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}