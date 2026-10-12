#include <iostream>

void solve() {
    int rows;
    std::cin >> rows;

    for(int i=0; i<rows; i++) {
        for(int j=0; j<=i; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

int main() {
    solve();
    return 0;
}