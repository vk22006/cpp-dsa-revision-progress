#include <iostream>

void solve() {
    int num;
    std::cin >> num;

    int temp = num;
    int sum = 0;
    int digit;
    while(temp>0) {
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    }

    std::cout << sum;
}

int main() {
    solve();
    return 0;
}