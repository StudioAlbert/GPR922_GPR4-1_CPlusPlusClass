#include <iostream>
#include <bitset>

int main()
{
    int myNumber;
    
    std::cout << "Pick a number : " << std::endl;
    std::cin >> myNumber;

    // Print
    std::cout << "Decimal value = " << myNumber << std::endl;
    std::cout << "Hexadecimal value = " << std::hex << myNumber << std::endl;
    std::cout << "Binary value = " << std::bitset<4>(myNumber) << std::endl;

}   
