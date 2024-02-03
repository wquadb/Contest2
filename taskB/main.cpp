#include <iostream>
#include <string>
#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <iterator> 

// #include <gtest/gtest.h>

bool isPalindrome(std::string& input, size_t length) 
{
    uint8_t right = static_cast<uint8_t>(length) - 1;
    uint8_t left = 0;
    while (right > left)
    {
        if (input[left] != input[right]) 
            return false;
        left++;
        right--;
    }
    return true;
}

int main() 
{
    std::string input;
    std::getline(std::cin, input);
    input.erase(std::remove(input.begin(), input.end(), ' '), input.end());

    if (isPalindrome(input, std::size(input))) // Use std::size to get the size of the input
        std::cout << "yes";
    else
        std::cout << "no";
    
    return 0;
}
