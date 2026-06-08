#include <iostream>

void solve() {
    int size;
    int currentMax;
    std::cout << "Enter size: ";
    std::cin >> size;
    int* arr = new int[size];
    for(int i=0; i<size; i++) std::cin >> arr[i];
    
    currentMax = arr[0];
    for (int i = 0; i < size; ++i) {
        if (arr[i] > currentMax) currentMax = arr[i];
    }

    std::cout << "Max element is: " << currentMax << std::endl;


    delete[] arr;
}

int main() {
    solve();
    
    return 0;
}