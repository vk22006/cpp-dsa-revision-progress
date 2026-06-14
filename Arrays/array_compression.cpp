#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>

void solve() {
    std::string line;

    std::cout << "Enter input: \n";
    std::getline(std::cin, line);

    std::stringstream ss(line);
    std::vector<int> arr;
    int x;

    while(ss >> x) {
        arr.push_back(x);
    }
    int count = 1;
    for(size_t i=1; i<arr.size(); i++) {
        if(arr[i-1]==arr[i]) count++;
        else {
            std::cout << arr[i-1] << " " << count << "\n";
            count = 1;
        }
    }
}

int main() {

    solve();

    return 0;
}