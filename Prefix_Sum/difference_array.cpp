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

    std::vector<int> difference(arr.size());
    int left = 1;
    int right = 3;
    int value = 10;
    difference[left] += value;
    if(right+1 < arr.size()) difference[right+1] -= value;

    for(size_t i=1; i<arr.size(); i++) difference[i] += difference[i-1];
    for(size_t i=0; i<arr.size(); i++) arr[i] += difference[i];

    for(int num : arr) std::cout << num << " ";
    
}

int main() {
    solve();
    return 0;
}