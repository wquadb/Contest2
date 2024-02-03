#include <iostream>
#include <cstring> // Include the <cstring> header for std::strlen
#include <cctype> // Include the <cctype> header for std::isdigit, std::islower, std::isupper
#include <cstdint> // Include the <cstdint> header for uint8_t


bool charCheck(char* userPassword, size_t length) 
{
    bool symbols = false, uppercase = false, lowercase = false, numbers = false;
    for (int i = 0; i < length; i++) {
        if (bool(std::islower(userPassword[i])))
            lowercase = true;
        else if (bool(std::isupper(userPassword[i])))
            uppercase = true;
        else if (bool(std::isdigit(userPassword[i])))
            numbers = true;
        else 
            symbols = true;
    }
    uint8_t sum = symbols + numbers + lowercase + uppercase;
    return sum >= 3;
}

int main() 
{
    const int IN_LENGTH = 15;

    char input[IN_LENGTH];

    std::cin >> input;

    size_t size = std::strlen(input);

    if (size >= 8 && size <= 14 && (charCheck(input, std::strlen(input))))
        std::cout << "YES";
    else
        std::cout << "NO";
    return 0;
}