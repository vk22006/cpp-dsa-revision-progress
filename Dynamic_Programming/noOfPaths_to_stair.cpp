// Count the no of paths to reach a particular stair
// i/p: 4
// o/p: 5
// Explanation: dp[n] represents no of paths. dp[1] will be 1, dp[2] will be 2,
// likewise, dp[3] will be dp[1] + dp[2] and so on.

#include <iostream>
#include <sstream>
#include <vector>

template<typename derived>
std::ostream& operator<<(std::ostream& out, const std::vector<derived>& arr) {
    for(const derived& value : arr) {
        out << value << " ";
    }
    return out;
}

void solve() {
    int target;
    std::cin >> target;

    std::vector<int> dp(target+1);

    if(target <= 0) {
        std::cout << 0;
        return;
    }
    else if(target==1) {
        std::cout << 1;
        return;
    }
    else if(target==2) {
        std::cout << 2;
        return;
    }

    // Set base cases
    dp[1] = 1;
    dp[2] = 2;

    // Calculate path
    for(int i=3; i<=target; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }

    std::cout << dp[target];
}
int main() {
    solve();
    return 0;
}