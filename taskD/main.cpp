#include <iostream>
#include <string>
#include <algorithm>

std::string replaceToNumbers(const std::string& str) {
    std::string result = "";
    for (char c : str) {
        if (c == 'b' || c == 'f' || c == 'p' || c == 'v') {
            result += '1';
        } else if (c == 'c' || c == 'g' || c == 'j' || c == 'k' || c == 'q' || c == 's' || c == 'x' || c == 'z') {
            result += '2';
        } else if (c == 'd' || c == 't') {
            result += '3';
        } else if (c == 'l') {
            result += '4';
        } else if (c == 'm' || c == 'n') {
            result += '5';
        } else if (c == 'r') {
            result += '6';
        } else {
            result += c;
        }
    }
    return result;
}


int main() 
{
    std::string oldstr;
    std::cin >> oldstr;
    std::string firstChar = oldstr.substr(0, 1);
    std::string str = oldstr.substr(1, oldstr.size() - 1);
    char remo[] = {'a', 'e', 'h', 'i', 'o', 'u', 'w', 'y', '\0'};
    for (int i = 0; i < 9; i++)
    {
        str.erase(std::remove(str.begin(), str.end(), remo[i]), str.end());
    }
    str = replaceToNumbers(str);
    auto end_unique = std::unique(str.begin(), str.end());
    str.erase(end_unique, str.end());
    if (str.size() > 3) {
        str = str.substr(0, 3);
        std::cout << firstChar + str;
    } else {
        std::string zeros(3 - str.size(), '0');
        std::cout << firstChar + str + zeros;
    }
    return 0;
}