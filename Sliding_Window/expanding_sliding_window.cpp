#include <iostream>
#include <vector>
#include <sstream>

template<typename T>
void array_input(std::vector<T>& arr) {
    std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    T x;

    while(ss >> x) arr.push_back(x);
} 

template<typename T>
std::ostream& operator<<(std::ostream& out, const std::vector<T>& arr) {
    for(const T& value : arr) {
        out << value << " ";
    }
    return out;
} 

void solve() {
    int target;
    std::vector<int> arr;
    array_input(arr);
    std::cin >> target;

    int left = 0;
    int right = 0;
    int sum = 0;

    for(right = 0; right < arr.size(); right++) {
        sum += arr[right];
        while(sum>target) {
            sum -= arr[left];
            left++;
        }
    }

    std::cout << sum;

}

int main() {
    solve();
    return 0;
}