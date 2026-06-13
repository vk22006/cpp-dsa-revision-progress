#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>

void solve() {
    std::string line;
    std::cout << "Enter input:\n";
    std::getline(std::cin, line);
    std::stringstream ss(line);
    int x;

    std::vector<int> arr;
    while(ss >> x) arr.push_back(x);

    if(arr.size()==0) {
        std::cout << "Array is empty.";
        return;
    }

    int rotateVal = 1;
    std::vector<int> rotated;
    // Add elements from index 1 upto end
    for(size_t i=rotateVal; i<arr.size(); i++) rotated.push_back(arr[i]);

    // Add first element of arr to last of rotate array
    rotated.push_back(arr[0]);

    for(int num : rotated) std::cout << num << " ";
    return;
}

int main() {
    solve();
    return 0;
}