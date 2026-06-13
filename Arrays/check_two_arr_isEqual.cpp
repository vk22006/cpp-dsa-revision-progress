#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>

void solve() {
    std::string line;
    std::string line_;
    std::cout << "Enter input (arr 1):\n";
    std::getline(std::cin, line);
    std::cout << "Enter input (arr 2):\n";
    std::getline(std::cin, line_);

    std::stringstream ss(line);
    std::stringstream ss_(line_);
    int x;

    std::vector<int> arr;
    std::vector<int> arr_;
    while(ss >> x) arr.push_back(x);
    while(ss_ >> x) arr_.push_back(x);

    if(arr.size() != arr_.size()) {
        std::cout << "Arrays are not equal";
        return;
    }

    bool isEqual = false;
    for(size_t i=0; i<arr.size(); i++) {
        if(arr[i]!=arr_[i]) {
            isEqual = false;
            break;
        }
        isEqual = true;
    }
    if(isEqual) std::cout << "Arrays are equal";
    else std::cout << "Arrays are not equal";
}

int main() {
    solve();
    return 0;
}