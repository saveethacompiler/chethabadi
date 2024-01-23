#include <iostream>
#include <string>
using namespace std;
string reverseString(const std::string& input) {
    std::string reversed;
    for (int i = input.length() - 1; i >= 0; --i) {
        reversed.push_back(input[i]);
    }
    
    return reversed;
}

int main() {
    std::string original, reversed;

    std::cout << "Enter a string: ";
    std::getline(std::cin, original);
    reversed = reverseString(original);
    std::cout << "Reversed string: " << reversed << std::endl;

    return 0;
}
