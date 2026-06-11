#include <iostream>

int main() {
    int num; int k;
    std::cout << "Enter num: ";
    std::cin >> num;
    std::cout << "Enter position k: ";
    std::cin >> k;

    int mask = 1 << k;
    num = num | mask;
    std::cout << num;

    return 0;
}