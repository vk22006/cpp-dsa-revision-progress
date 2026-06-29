#include <iostream>
#include <string>
#include <cctype>

void solve() {
    std::string word;
    std::cin >> word;

    int size = static_cast<int>(word.size());

    bool isPalindrome = true;
    for(int i=0; i<size; i++) {
        if(word[i]!=word[size-i-1]) {
            isPalindrome = false;
            break;
        }
    }
    if(isPalindrome) std::cout << "It's palindrome";
    else std::cout << "Not palindrome";
}

int main() {
    solve();
    return 0;
}