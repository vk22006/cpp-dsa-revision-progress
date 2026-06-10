#include <iostream>
#include <string>
#include <sstream>
#include <vector>

bool isValueExists(int val, std::vector<int>& array) {
    for(int i=0; i<static_cast<int>(array.size()); i++) {
        if(val==array[i]) {
            return false;
        }
    }
    return true;
}

void solve() {
    std::string line;
    std::cout << "Enter input: \n";
    std::getline(std::cin, line);
    std::stringstream ss(line);
    int x;

    std::vector<int> arr;
    std::vector<int> arr_;
    while(ss >> x) arr.push_back(x);

    int count = 0;
    for(int i=0; i<arr.size(); i++) {
        if(isValueExists(arr[i], arr_)) {
            count+=1;
            arr_.push_back(arr[i]);
        }
    }

    std::cout << "Unique values: " << static_cast<int>(arr_.size());
}

int main() {
    solve();
    return 0;
}