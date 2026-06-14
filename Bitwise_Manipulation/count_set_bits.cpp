#include <iostream>

void solve() {
    int num;
    std::cout << "Enter num: ";
    std::cin >> num;

    int count = 0;
    int mask = 1;
    while(num > 0) {
        if(num & mask) count++;
        num >>= 1;
    }
    std::cout << count;
}

int main() {
    solve();
    return 0;
}