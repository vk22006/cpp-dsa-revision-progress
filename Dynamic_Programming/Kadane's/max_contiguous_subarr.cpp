/*
Find the maximum sum contiguous subarray.

Example:
Input:
7
2 -1 3 -5 6 2 -1

Output:
8
*/

#include <iostream>
#include <vector>
#include <sstream>

void solve() {
    int size;
    std::cin >> size;
    std::vector<int> arr(size);

    for(int i=0; i<size; i++) std::cin >> arr[i];

    int curr = arr[0];
    int best = arr[0];

    for(int i=1; i<size; i++) {    // Since we init with 0th index, we will begin loop from 1st index
        curr = std::max(arr[i], curr + arr[i]);
        best = std::max(best, curr);
    }

    std::cout << best;

    // for(int num : arr) std::cout << num << " ";
}

int main() {
    solve();
    return 0;
}