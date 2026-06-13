// Partition even odd values in a array
// Sample input: 1 4 7 8 2 3
// Expected output: 4 8 2 1 7 3

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

void solve() {
    std::string line;
    std::cout << "Enter input:\n";
    std::getline(std::cin, line);
    std::stringstream ss(line);
    int x;

    std::vector<int> arr;
    std::vector<int> result;
    while(ss >> x) arr.push_back(x);

    for(int num : arr) {
        if(num%2==0) result.push_back(num);
    }
    for(int num : arr) {
        if(num%2 != 0) result.push_back(num);
    }
    for(int num : result) {
        std::cout << num << " ";
    }

}

int main() {
    solve();
    return 0;
}