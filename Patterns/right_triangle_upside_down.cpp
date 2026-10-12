#include <iostream>

void solve() {
    int rows;
    std::cin >> rows;
    for(int i=rows; i>0; i--) {
        for(int j=i; j>=0; j--) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

int main() {
    solve();
    return 0;
}