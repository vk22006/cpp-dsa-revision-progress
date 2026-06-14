#include <iostream>
#include <sstream>
#include <vector>
#include <utility>

void solve() {
    std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    int x;

    std::vector<int> arr;
    while(ss >> x) arr.push_back(x);

    for(size_t j=1; j<arr.size(); j++) {
        for(size_t i=1; i<arr.size(); i++) {
            if(arr[i]==0) {
                std::swap(arr[i], arr[i-1]);
            }
        }
    }
    for(int num : arr) std::cout << num << " ";
}

int main() {
    solve();
    return 0;
}