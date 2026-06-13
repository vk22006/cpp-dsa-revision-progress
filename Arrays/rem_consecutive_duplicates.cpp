// REMOVE CONSECUTIVE DUPLICATES
// Input: 1 1 2 2 2 3 1
// Output: 1 2 3 1

#include <iostream>
#include <vector>
#include <sstream>

void solve() {
    std::string line;
    std::cout << "Enter input: \n";
    std::getline(std::cin, line);
    std::stringstream ss(line);
    int x;

    std::vector<int> arr;
    while(ss >> x) arr.push_back(x);
    
    for(size_t i=1; i<arr.size(); i++) {
        if(arr[i-1]==arr[i] || arr[i+1]==arr[i]) arr[i] = 0;
    }
    std::vector<int> result;
    for(int num : arr) {
        if(num!=0) result.push_back(num);
    }
    for(int num : result) std::cout << num << " ";
}

int main() {

    solve();

    return 0;
}