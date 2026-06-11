#include <iostream>

int main() {

    int num;
    std::cout << "Enter num: ";
    std::cin >> num;

    int mask = num-1; // if 8 is 1000, then 7 will be 0111 - easier to use this as mask
    int get_check = num & mask;

    if((num>0) && (!get_check)) std::cout << num << " is power of 2";
    else std::cout << num << " is not power of 2";

    return 0;
}