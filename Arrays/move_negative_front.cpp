#include <iostream>
#include <string>
#include <sstream>
#include <vector>

std::vector<int> moveNegativeToFront(const std::vector<int>& array) {
    std::vector<int> temp;
    for(int num : array) {
        if(num < 0) temp.push_back(num);
    }
    for(int num : array) {
        if(num >= 0) temp.push_back(num);
    }
    return temp;
} 

void solve() {
    std::string line;
    std::getline(std::cin, line);
    std::stringstream ss(line);
    int x;

    std::vector<int> arr;
    while(ss >> x) arr.push_back(x);

    std::vector<int> result = moveNegativeToFront(arr);
    for(int num : result) std::cout << num << " ";
}

int main() {
    solve();
    return 0;
}