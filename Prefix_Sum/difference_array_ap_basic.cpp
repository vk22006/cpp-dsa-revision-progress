// Difference array based on simple AP
// I/P: 0 0 0 0 0
// O/P: 0 3 5 7 9
// Query for this problem: l = 1, r = 4, a = 3, d = 2

#include <iostream>
#include <sstream>
#include <vector>

template<typename T>
void input_array(std::vector<T>& arr) {
    std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    T x;

    while(ss >> x) {
        arr.push_back(x);
    }
}

template<typename derived>
std::ostream& operator<<(std::ostream& out, const std::vector<derived>& arr) {
    for(const derived& value : arr) {
        out << value << " ";
    }
    return out;
}

void solve() {
    std::vector<int> arr;
    input_array(arr);

    std::vector<int> diff(arr.size());
    // Query
    int left = 1;
    int right = 4;
    int a = 3;
    int d = 2;

    diff[left] += a;
    if(right+1 < diff.size()) diff[right+1] -= a * (right-left);
    for(int i=left+1; i<=right; i++) {
        diff[i] += d;
    }
    
    for(int i=1; i<diff.size(); i++){
        diff[i] = diff[i-1] + diff[i];
    }

    for(int i=0; i<arr.size(); i++) {
        arr[i] += diff[i];
    }
    std::cout << arr;
    // std::cout << diff;
}

int main() {
    solve();
    return 0;
}
