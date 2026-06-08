#include <iostream>

void solve() {
    int size;
    std::cout << "Enter size: ";
    std::cin >> size;
    int* arr = new int[size];
    for(int i=0; i<size; i++) std::cin >> arr[i];

    int* RevArr = new int[size];
    for(int i=0; i<size; i++) {
        RevArr[i] = arr[size-1-i];
    }

    for(int i=0; i<size; i++) std::cout << RevArr[i] << " " ;

    delete[] RevArr;
    delete[] arr;
}

int main() {

    solve();

    return 0;
}