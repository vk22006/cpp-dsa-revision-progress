/*
A company records daily profit/loss.

Positive means profit.

Negative means loss.

Find the maximum profit earned during one continuous period.

Example:
8
-2 4 -1 5 -6 2 3 -1

Expected Output
8

Notice:
The question never says
"subarray."
*/

#include <iostream>
#include <vector>

int max(int x, int y) {
    if(x >= y) return x;
    return y;
}

void solve() {
    int size;
    std::cin >> size;
    std::vector<int> arr(size);
    for(int i=0; i<size; i++) std::cin >> arr[i];

    int curr = arr[0];
    int maxProfit = arr[0];

    for(int i=1; i<size; i++) {
        curr = max(arr[i], curr + arr[i]);
        maxProfit = max(maxProfit, curr);
    }

    std::cout << maxProfit;
}

int main() {
    solve();
    return 0;
}
