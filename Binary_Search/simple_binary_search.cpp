#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

int binary_search(int search, std::vector<int>& arr) {
    // std::vector<int> temp = arr;
    sort(arr.begin(), arr.end());
    int left = 0;
    int right = static_cast<int>(arr.size()) - 1;
    int mid = static_cast<int>(right/2);

    while(left<=right) {
        int mid = left + (right - left) / 2;
        
        if(search==arr[mid]) return mid;
        if(search > arr[mid]) left = mid + 1; 
        if(search < arr[mid]) right = mid - 1;
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

    int search;
    std::cin >> search;
    int pos = binary_search(search, arr);

    std::cout << "Value located at " << pos;
}

int main() {
    solve();
    return 0;
}