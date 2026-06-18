#include <iostream>
#include <sstream>
#include <vector>

int SumBetweenRange(int left, int right, const std::vector<int>& prefix) {
    int sum = 0;
    if(left==0) {
        sum = prefix[right];
        return sum;
    }
    sum = prefix[right] - prefix[left-1];   // Formula to find sum between range
    return sum;
}

void solve() {
    std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    int x;

    std::vector<int> arr;
    while(ss >> x) arr.push_back(x);

    std::vector<int> prefix(arr.size());
    
    if(arr.empty()) {
        return;
    }
    prefix[0] = arr[0];
    for(size_t i=1; i<arr.size(); i++) {
        prefix[i] = prefix[i-1] + arr[i];
    }

    int sum = SumBetweenRange(2,4, prefix);
    std::cout << sum;
}

int main() {
    solve();
    return 0;
}