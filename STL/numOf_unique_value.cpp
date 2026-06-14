#include <iostream>
#include <unordered_set>
#include <sstream>

void solve() {
    std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    int x;

    std::unordered_set<int> set_;
    while(ss >> x) {
        set_.insert(x);
    }
    int uniqueCount = set_.size();
    std::cout << "Number of unique values: " << uniqueCount;
}

int main() {
    solve();
    return 0;
}