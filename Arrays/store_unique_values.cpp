//Input : 1 2 2 3 4 4 5
// Output: 1 3 5
// Process remove values which get duplicated entirely

#include <iostream>
#include <sstream>
#include <vector>

std::vector<int> RemoveRepeatingElems(const std::vector<int>& arr) {
    int n = static_cast<int>(arr.size());
    std::vector<int> UniqueArray;

    for(int num : arr) {
        if((UniqueArray.size() != 0) && (UniqueArray.back()==num)) {
            UniqueArray.pop_back();
        }
        else UniqueArray.push_back(num);
    }

    return UniqueArray;
}

void solve() {
    std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    int x;

    std::vector<int> arr;
    while(ss >> x) arr.push_back(x);

    std::vector<int> result = RemoveRepeatingElems(arr);
    for(int num : result) std::cout << num << " ";
}

int main() {
    solve();
    return 0;
}