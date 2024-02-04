#include <iostream>
#include <string>

int main() {
    int div;
    std::string n;
    std::cin >> div >> n;
    int rem = 0;
    for (char digit : n) {
        int currDigit = digit - '0';
        rem = (rem * 10 + currDigit) % div;
    }
    std::cout << rem;
    return 0;
}