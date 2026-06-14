#include <iostream>
#include <sstream>
#include <vector>
#include <unordered_map>

int FindFirstDuplicateVal(const std::vector<int>& arr) {
    int size = static_cast<int>(arr.size());
    std::unordered_map<int, int> freq;
    for(int num : arr) freq[num]++;
    for(int num : arr) {
        if(freq[num]>1) return num;
    }
    return -1;
}

void solve() {
    std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    int x;

    std::vector<int> arr;
    while(ss >> x) arr.push_back(x);

    int result = FindFirstDuplicateVal(arr);
    std::cout << result;
}

int main() {
    solve();
    return 0;
}