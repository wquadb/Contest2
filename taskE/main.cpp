#include <iostream>
#include <cstring>
#include <fstream>


// void addOne(char* number, int i) 
// {
//     if (i < 0) 
//     {
//         for (int j = std::strlen(number); j > 0; j--) 
//         {
//             number[j] = '0';
//         }
//         number[0] = '1';
//     }
//     if (number[i] == '9') {
//         number[i] = '0';
//         addOne(number, i - 1);
//     } else {
//         number[i] += 1;
//     }
// }

void addOne(std::string& number) {
    int len = number.length();
    int carry = 1;
    for (int i = len - 1; i >= 0 && carry; --i) {
        int digit = number[i] - '0' + carry;
        carry = digit / 10;
        number[i] = (digit % 10) + '0';
    }
    if (carry > 0) {
        number = '1' + number;
    }
}

int main() 
{
    //char number[1000];
    std::string number;
    std::cin >> number;
    //addOne(number, std::strlen(number) - 1);
    addOne(number);
    std::cout << number;
    return 0;
}