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

    std::vector<int> res;
    for(int num : arr) {
        if(num!=0) res.push_back(num);
    }
    for(int i=res.size()-1; i<arr.size()-1; i++) res.push_back(0);
    for(int num : res) std::cout << num << " ";

}

int main() {
    solve();
    return 0;
}