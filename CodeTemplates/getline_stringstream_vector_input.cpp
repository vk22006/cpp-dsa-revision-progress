// Pattern:
// Line-based input parsing
// (getline + stringstream)
//
// Use when:
// Number of inputs unknown
// Entire array given in one line
//
// Example:
// 1 2 3 4 5

#include <iostream>
#include <vector>
#include <sstream>

void solve() {
    std::string line;

    std::cout << "Enter input: \n";
    std::getline(std::cin, line);

    std::stringstream ss(line);
    std::vector<int> arr;
    int x;

    while(ss >> x) {
        arr.push_back(x);
    }
    for(int num : arr) {
        std::cout << num << " ";
    }
}

int main() {

    solve();

    return 0;
}