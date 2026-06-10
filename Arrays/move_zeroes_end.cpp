#include <iostream>
#include <vector>
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