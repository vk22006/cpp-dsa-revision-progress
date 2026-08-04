/*
First Missing Positive:
Given an unsorted integer array nums. Return the smallest positive integer that is not present in nums.

Example 1

Input: 
3
1 2 0

Output: 
3

Explanation:
The numbers in the range [1,2] are all in the array.

Example 2

Input:
4
3 4 -1 1

Output:
2

Explanation:
1 is in the array, but 2 is missing.

Example 3

Input:
5
7 8 9 11 12

Output:
1

Explanation:
The smallest positive integer, 1, is missing.
*/

#include <iostream>
#include <vector>
#include <unordered_set>

int main() {
    int num;
    std::cin >> num;
    std::vector<int> arr(num);
    for(int i=0; i<num; i++) std::cin >> arr[i];

    std::unordered_set<int> seen;
    for(int x : arr) {
        if(x > 0) seen.insert(x);
    }

    int ans = 1;
    while(true) {
        if(seen.find(ans) == seen.end()) {
            std::cout << ans;
            return 0;
        }
        ans++;
    }

    return 0;
}