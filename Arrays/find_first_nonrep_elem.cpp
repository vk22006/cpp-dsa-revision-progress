#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>

int findFirstNonRepeatingElement(const std::vector<int>& array) {
    std::unordered_map<int,int> freq;
    for(int num : array) {
        freq[num]++;
    }
    for(int num : array) {
        if(freq[num]==1) {
            return num;
        } 
    }
    return -1;
}

void solve() {
    std::string line;
    std::cout << "Enter input:\n";
    std::getline(std::cin, line);
    std::stringstream ss(line);
    int x;

    std::vector<int> arr;
    while(ss >> x) arr.push_back(x);

    int result = findFirstNonRepeatingElement(arr);
    std::cout << "First non repeating element is: " << result;
    
}

int main() {
    solve();
    return 0;
}