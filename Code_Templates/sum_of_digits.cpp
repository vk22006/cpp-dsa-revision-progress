#include <iostream>

int main() {

    // Sum of digits
    // Consider given number as variable num

    int num;
    std::cin >> num;

    int temp = num;
    int sum = 0;
    while(temp>0) {
        int digit = temp % 10;
        sum += digit;
        temp /= 10;
    }

    std::cout << sum;

    return 0;
}