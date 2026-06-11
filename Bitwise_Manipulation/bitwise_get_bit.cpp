#include <iostream>

int main() {

    // Get bit
    int n;
    int pos;
    std::cout << "Enter num: ";
    std::cin >> n;
    std::cout << "Enter position: ";
    std::cin >> pos;

    int mask = 1 << pos;

    if(n & mask) {
        std::cout << "It's one\n";
    }
    else {
        std::cout << "It's zero\n";
    }

    return 0;
}