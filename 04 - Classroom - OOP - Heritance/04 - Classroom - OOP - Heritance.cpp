
#include <iostream>

#include "Hat.h"
#include "Shoes.h"
#include "Suitcase.h"

int main()
{
    std::cout << "Hello World!\n";

    Suitcase mySuitcase;

    Hat myHatHat("Tulle", "Chapeau de mariage");
    Shoes mySneakers("Baskets", 44);

    std::cout << "My hat is " << myHatHat.to_string() << std::endl;
    std::cout << "My Sneaker are " << mySneakers.to_string() << std::endl;
    std::cout << std::endl;
    
    mySuitcase.addItem(&myHatHat);
    mySuitcase.addItem(&mySneakers);

    mySuitcase.printStuff();

}
