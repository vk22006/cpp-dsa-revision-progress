#include <iostream>
#include <sstream>
#include <vector>

void solve() {
    std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    int x;

    std::vector<int> arr;
    while(ss >> x) arr.push_back(x);

    for(int i=0; i<arr.size()-1; i++) {
        for(int j=i+1; j<arr.size(); j++) {
            if(arr[j] < arr[i]) {
                arr[j] = arr[i] ^ arr[j];
                arr[i] = arr[i] ^ arr[j];
                arr[j] = arr[i] ^ arr[j];
            }
        }
    }

    for(int num : arr) std::cout << num << " ";
}

int main() {
    solve();
    return 0;
}