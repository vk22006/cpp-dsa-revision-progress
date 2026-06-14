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
    for(int num : set_) std::cout << num << " ";
}

int main() {
    solve();
    return 0;
}