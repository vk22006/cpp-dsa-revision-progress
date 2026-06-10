#include <iostream>
#include <string>
#include <sstream>
#include <vector>

void solve() {
    std::string line;
    std::cout << "Enter input: \n";
    std::getline(std::cin, line);
    std::stringstream ss(line);
    int x;

    std::vector<int> arr;
    while(ss >> x) {
        arr.push_back(x);
    }

    for(int i=0; i<static_cast<int>(arr.size()); i++) {
        if(arr[i-1]==arr[i]) {
            arr[i-1] = arr[i];
            arr[i] = 0;
        }
    }

    for(int num : arr) {
        std::cout << num << " ";
    }

}

int main() {
    solve();
    return 0;
}