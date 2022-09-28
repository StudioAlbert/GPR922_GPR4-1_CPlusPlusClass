#include <iostream>
#include <string>

class Animal
{
public:
    // turn the following virtual modifier on/off to see what happens
    //virtual   
	virtual std::string Says() { return "?"; }
};

class Dog : public Animal
{
public:
	std::string Says() override { return "Woof"; }
};

void makeAnimalSay(Animal& animal)
{
    std::cout << animal.Says() << std::endl;
}

void main()
{
    Dog d;
    Animal a;       // refer to Dog instance with Animal pointer

	std::cout << a.Says() << std::endl;
	std::cout << d.Says() << std::endl;

	makeAnimalSay(a);
	makeAnimalSay(d);
	
}