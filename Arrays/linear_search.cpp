#include <iostream>

void solve() {
    int size;
    std::cout << "Enter size: ";
    std::cin >> size;

    int* arr = new int[size];

    for(int i=0; i<size; i++) std::cin >> arr[i];

    int searchnum;
    std::cout << "Enter number to search: ";
    std::cin >> searchnum;
    for(int i=0; i<size; i++) {
        if(arr[i]==searchnum) {
            std::cout << "Number located at index: " << i;
            return;
        }
    }
    delete[] arr;
}

int main() {

    solve();

    return 0;
}