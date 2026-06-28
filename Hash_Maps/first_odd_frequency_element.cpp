/*
Find the first element which frequency is a odd number
Input: 1 2 1 3 3 4
Output: 2

Input: a A d b a b
Output: d

Note: If char array, you should lowercase all elements and add them in frequency
*/

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <unordered_map>
#include <type_traits>

template<typename T>
void array_input(std::vector<T>& arr) {
    std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    T x;

    while(ss >> x) arr.push_back(x);
}

template<typename derived>
void solve() {
    std::vector<derived> arr;
    array_input(arr);

    // if constexpr(std::is_same_v<derived, char>) {
    //     for(char& letter : arr) {
    //         letter = std::tolower(letter);
    //     }
    // }

    std::unordered_map<char, int> freq;
    for(const derived& value : arr) {
        freq[value]++;
    }

    bool isFound = false;
    derived result{};
    for(const derived& value : arr) {
        if(freq[value] % 2 != 0) {
            result = value;
            isFound = true;
            break;
        }
    }

    if(isFound) {
        std::cout << result;
    }
    else {
        std::cout << "All elements have even frequency";
    }
}

int main() {
    solve<char>();
    return 0;
}