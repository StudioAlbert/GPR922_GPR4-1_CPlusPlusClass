#include <iostream>

int main()
{
    constexpr int numRows = 15;
    constexpr int numCols = 10;

    // Declare a 10x10 array
    int product[numRows][numCols]{};

    product[6][3] = 25;

    // Print the table ------------------------------------------------------
    for (int col{ 0 }; col < numCols; ++col)   
    {
        for (int row = 0; row < numRows; ++row) {
            std::cout << row << ":" << col << "=" << product[row][col] << '\t';
        }

        // Jump a line
        std::cout << std::endl;

    }

    return 0;
}