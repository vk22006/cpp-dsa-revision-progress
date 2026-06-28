// Longest segment in a array whose sum <= k
// Expanding Sliding Window

#include <iostream>
#include <sstream>
#include <vector>

template<typename T>
void array_input(std::vector<T>& arr) {
    std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    T x;

    while(ss >> x) arr.push_back(x);
}

void solve() {
    std::vector<int> arr;
    array_input(arr);
    int target;
    std::cin >> target;

    int left = 0;
    int sum = 0;
    int maxLength = 0;

    for(int right=0; right < static_cast<int>(arr.size()); right++) {
        sum += arr[right];
        while(sum > target) {
            sum -= arr[left];
            left++;
        }
        int length = right-left+1;
        if(length > maxLength) {
            maxLength = length;
        }
    }

    std::cout << maxLength;
}

int main() {
    solve();
    return 0;
}