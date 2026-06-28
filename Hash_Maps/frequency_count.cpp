#include <iostream>
#include <map>

void solve() {
    int size;
    std::cout << "Enter size: ";
    std::cin >> size;
    int* arr = new int[size];
    for(int i=0; i<size; i++) std::cin >> arr[i];

    std::map<int, int> frequency_map;
    for(int i=0; i<size; i++) {
        frequency_map[arr[i]]++;
    }

    for(auto elements : frequency_map) {
        std::cout << elements.first << " : " << elements.second << "\n";
    }
}

int main() {

    solve();

    return 0;
}