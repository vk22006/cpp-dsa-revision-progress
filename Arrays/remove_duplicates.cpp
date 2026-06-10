#include <iostream>
#include <sstream>
#include <string>
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
    std::string input_line;
    std::getline(std::cin, input_line);
    std::stringstream ss(input_line);
    int x;

    std::vector<int> arr;
    std::vector<int> res_arr;

    while(ss >> x) {
        arr.push_back(x);
    }

    for(int i=0; i<static_cast<int>(arr.size()); i++) {
        if(isValueExists(arr[i],res_arr)) res_arr.push_back(arr[i]);
    }

    for(int num : res_arr) {
        std::cout << num << " ";
    }

}

int main() {
    solve();
    return 0;
}