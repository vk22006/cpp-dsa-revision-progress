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

    for(size_t i = 0; i < arr.size(); i++) {
        for(size_t j = 1; j < arr.size(); j++) {
            if(arr[j]<arr[j-1]) {
                arr[j] = arr[j] ^ arr[j-1];
                arr[j-1] = arr[j] ^ arr[j-1];
                arr[j] = arr[j] ^ arr[j-1];
            }
        }
    }

    for(int num : arr) std::cout << num << " ";
}

int main() {
    solve();
    return 0;
}