#include <iostream>
#include <string>
#include <algorithm>
// #include <gtest/gtest.h>

bool isPalindrome(const std::string& input) 
{
    std::string reversedInput = input;
    std::reverse(reversedInput.begin(), reversedInput.end());
    return input == reversedInput;
}

int main() 
{
    std::string input;
    std::getline(std::cin, input);
    input.erase(std::remove(input.begin(), input.end(), ' '), input.end());

    if (isPalindrome(input))
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
    return 0;
}
