#include <iostream>
#include <vector>
#include <unordered_set>
#include <sstream>

void solve() {
    std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    int x;

    std::vector<int> arr;
    while(ss >> x) {
        arr.push_back(x);
    }
    std::unordered_set<int> unique;
    for(int num : arr) unique.insert(num);
    for(int num : unique) std::cout << num << " ";
}

int main() {
    solve();
    return 0;
}