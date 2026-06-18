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

    int count = 0;
    for(int i=1; i<arr.size(); i++) {
        if(arr[i] > arr[i-1]) count++;
    }

    std::cout << count;
}

int main() {
    solve();
    return 0;
}