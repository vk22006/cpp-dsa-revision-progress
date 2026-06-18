// I/P: 1 1 1 2 2 3 3 3 3
// O/P: 4

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

    int count = 1;
    int max = 0;
    for(size_t i=1; i<arr.size(); i++) {
        if(arr[i-1]==arr[i]) count++;
        else{
            std::cout << arr[i-1] << " " << count << "\n";
            if(count > max) max = count;
            count = 1;
        }
    }
    if(count > max) max = count;
    std::cout << arr[arr.size()-1] << " " << count << "\n";
    std::cout << "Longest consecutive equal grp: " << max;
}

int main() {
    solve();
    return 0;
}