#include <iostream>
#include <sstream>
#include <vector>

template<typename T>
void array_input(std::vector<T>& arr) {
    arr.clear();
    std::string input;
    std::cout << "Enter input: ";
    std::getline(std::cin, input);
    std::stringstream ss(input);
    T x;

    while(ss >> x) arr.push_back(x);
}

template<typename T>
void print_array(const std::vector<T>& arr) {
    for(const T& value : arr) {
        std::cout << value << " "; 
    }
    std::cout << "\n";
}

template<typename T>
std::ostream& operator<<(std::ostream& out, const std::vector<T>& arr) {
    for(const T& value : arr) {
        out << value << " ";
    }
    return out;
}

int main() {
    std::vector<int> arr;
    std::vector<std::string> str_arr;

    array_input(arr);
    array_input(str_arr);

    print_array(arr);
    std::cout << str_arr;

    return 0;
}