#include <iostream>
#include <sstream>
#include <vector>

void solve() {
    std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    int x;

    std::vector<int> arr;
    while(ss >> x) arr.push_back(x);

    std::vector<int> prefix_arr(arr.size());
    prefix_arr[0] = arr[0];
    for(size_t i=1; i<arr.size(); i++) {
        prefix_arr[i] = prefix_arr[i-1] + arr[i];
    }

    for(int num : prefix_arr) std::cout << num << " ";
}

int main() {
    solve();
    return 0;
}