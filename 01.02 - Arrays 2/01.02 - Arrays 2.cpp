

// Attention Le passage d'un tableau dans une fonction est un passage par référence en C++
#include <iostream>

// Pass a value
void passValue(int &value)
{
    value = 99; // so changing it here won't change the value of the argument
}

// Pass the array
void passArray(int localArray[])
{
    std::cout << "values =" << localArray[0] << std::endl;

    //localArray[0]++; // so changing it here will change the original argument!
    //localArray[1]++;
    //localArray[2]++;
    //localArray[3]++;
    //localArray[4]++;

}

int main()
{

    int value = 4;
    passValue(value);

    int mainArrayA[5]{ 2, 3, 5, 7, 11 };
    std::cout << "before passValue: " << mainArrayA[1] << '\n';
    passValue(mainArrayA[4]);
    std::cout << "after passValue: " << mainArrayA[1] << '\n';

    int mainArrayb[5]{ 2, 3, 5, 7, 11 };
    std::cout << "before passArray: " << mainArrayb[0] << " " << mainArrayb[1] << " " << mainArrayb[2] << " " << mainArrayb[3] << " " << mainArrayb[4] << '\n';
    passArray(mainArrayb);
    std::cout << "after passArray: " << mainArrayb[0] << " " << mainArrayb[1] << " " << mainArrayb[2] << " " << mainArrayb[3] << " " << mainArrayb[4] << '\n';

    return 0;
}