#include <iostream>
#include <sstream>
#include <vector>

template<typename T>
void array_input(std::vector<T>& arr) {
    arr.clear();
    std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    T x;

    while(ss >> x) arr.push_back(x);
}

template<typename derived>
std::ostream& operator<<(std::ostream& out, const std::vector<derived>& arr) {
    for(const derived& value : arr) {
        out << value << " ";
    }
    return out;
}

int min_val(int x, int y) {
    if(x<y) return x;
    else return y;
}

void solve() {
    std::vector<int> cost;
    std::cout << "Enter input:\n";
    array_input(cost);
    std::vector<int> dp(cost.size());

    dp[1] = cost[1];
    dp[2] = cost[2];

    for(int i=0; i<cost.size(); i++) {
        dp[i] = cost[i] + min_val(dp[i-1], dp[i-2]);
    }

    std::cout << dp;
}

int main() {
    solve();
    return 0;
}