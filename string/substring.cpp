#include <iostream>
#include <string>

void printSubstrings(const std::string& str) {
    int n = str.length();

    // Generate all possible substrings
    for (int len = 1; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            std::cout << str.substr(i, len) << std::endl;
        }
    }
}

int main() {
    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    std::cout << "All possible substrings:" << std::endl;
    printSubstrings(inputString);

    return 0;
}
