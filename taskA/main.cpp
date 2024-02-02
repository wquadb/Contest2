#include <iostream>
#include <cctype>


bool lengthCheck(int length) 
{
    if (length < 8 || length > 14)
        return false;
    return true;
}

bool charCheck(char* userPassword, size_t len) 
{
    bool symbols, uppercase, lowercase, numbers = false;

    for (int i = 0; i < len; i++) 
    {
        if (!numbers) {
            numbers = (bool(std::isdigit(userPassword[i])));
        } else if (!lowercase) {
            lowercase = (bool(std::islower(userPassword[i])));
        } else if (!uppercase) {
            uppercase = (bool(std::isupper(userPassword[i])));
        } else if (!symbols) {
            symbols = bool(int(userPassword[i]) >= 33 && int(userPassword[i]) <= 127);
        }
        if (symbols + numbers + lowercase + uppercase > 2)
            return true;
    }
    return false;
}

int main() 
{
    const int IN_LENGTH = 15;

    char input[IN_LENGTH];

    std::cin >> input;
    
    if (lengthCheck(strlen(input)) && charCheck(input, strlen(input))) {
        std::cout << "YES";
        return 0;
    }
    std::cout << "NO";
    return 0;
}