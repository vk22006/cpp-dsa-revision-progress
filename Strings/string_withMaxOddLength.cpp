#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <sstream>

template<typename T>
void arr_input(std::vector<T>& arr) {
    std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    T word;

    while(ss >> word) arr.push_back(word);

}

int main() {
    std::vector<std::string> arr;
    arr_input(arr);

    int maxLength = INT_MIN;
    for(std::string word : arr) {
        int size = static_cast<int>(word.size());
        if(size % 2 != 0) {
            if(size > maxLength) {
                maxLength = size;
            }
        }
    }

    if(maxLength==INT_MIN) {
        std::cout << "Better luck next time";
        return 0;
    }

    std::string res = "";
    for(std::string word : arr) {
        int size = static_cast<int>(word.size());
        if(size==maxLength) {
            res = word;
            break;
        }
    }

    std::cout << res;

    return 0;
}