#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>
#include <cctype>

template<typename T>
void arr_input(std::vector<T>& arr) {
    std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    T elem;

    while(ss>>elem) arr.push_back(elem);
}

void solve() {
    std::vector<char> arr;
    arr_input(arr);

    std::unordered_map<char, int> freq;
    for(char letter : arr) {
        letter = tolower(letter);
        freq[letter]++;
    }

    char result;
    for(char letter : arr) {
        if(freq[letter]==1) {
            result = letter;
            break;
        }
    }

    std::cout << result;
}

int main() {
    solve();
    return 0;
}