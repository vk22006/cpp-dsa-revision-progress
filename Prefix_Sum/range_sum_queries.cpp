#include <iostream>
#include <vector>

void solve() {
    int size;
    int numOfQueries;
    std::cin >> size >> numOfQueries;

    std::vector<int> arr(size);
    for(int i=0; i<size; i++) std::cin >> arr[i];

    std::vector<int> l(numOfQueries);
    std::vector<int> r(numOfQueries);
    for(int q=0; q<numOfQueries; q++) {
        std::cin >> l[q] >> r[q];
    }
    
    std::vector<std::pair<int, int>> queries(numOfQueries);
    for(int i=0; i<numOfQueries; i++) {
        queries[i] = { l[i], r[i] };
    }

    std::vector<int> prefix(size);
    prefix[0] = arr[0];
    for(int i=1; i<size; i++) prefix[i] = prefix[i-1] + arr[i];

    int sum = 0;
    for(auto query : queries) {
        if(static_cast<int>(query.first)==0) {
            sum = prefix[static_cast<int>(query.second)];
        }
        else {
            sum = prefix[static_cast<int>(query.second)] - prefix[static_cast<int>(query.first) - 1];
        }
        std::cout << sum << " ";
        sum = 0;          // Refreshing sum value
    }
}

int main() {
    solve();
    return 0;
}