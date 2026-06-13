#include <iostream>
#include <string>
#include <sstream>
#include <vector>

// NOTE: This method only works with sequence starting from 1 to n (ie. 1,2,....,n)

void solve() {
    std::string line;
    std::cout << "Enter input:\n";
    std::getline(std::cin, line);
    std::stringstream ss(line);
    int x;

    std::vector<int> arr;
    while(ss >> x) arr.push_back(x);

    // If given array is already sorted
    int n = arr[arr.size()-1];
    int expected_sum = (n*(n+1)) / 2;
    int actual_sum = 0;
    for(int num : arr) actual_sum += num;

    int missing_value = expected_sum - actual_sum;
    std::cout << "Missing value: " << missing_value;
}

int main() {
    solve();
    return 0;
}