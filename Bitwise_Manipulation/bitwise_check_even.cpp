#include <iostream>

int main() {

    int num;
    std::cout << "Enter num: ";
    std::cin >> num;

    int mask = 1; // since we are considering first bit, we use 1 as mask (0001)
    int get_check = num & mask;

    if(!get_check) std::cout << num << " is even";
    else std::cout << num << " is odd";

    return 0;
}