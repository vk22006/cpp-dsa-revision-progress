#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>

void solve() {
    std::string line;

    std::cout << "Enter input: \n";
    std::getline(std::cin, line);

    std::stringstream ss(line);
    std::vector<int> arr;
    int x;

    while(ss >> x) {
        arr.push_back(x);
    }
    std::unordered_map<int, int> freq;
    for(int num : arr) freq[num]++;
    for(auto& keyval : freq) std::cout << keyval.first << " " << keyval.second << "\n";
}

int main() {

    solve();

    return 0;
}