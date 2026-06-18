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

    int k = 3;
    int sum = 0;

    //First window
    for(int i=0; i<k; i++) sum += arr[i];
    int max = sum;

    for(int i=k; i<arr.size(); i++) {
        sum = sum - arr[i-k] + arr[i];
        if(sum > max) max = sum;
    }
    std::cout << max;
}

int main() {
    solve();
    return 0;
}