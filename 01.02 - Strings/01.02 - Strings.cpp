#include <iostream>
#include <string>

int main()
{
    std::string myWord = "francis";
    std::string myInput;

    std::string first_name = "John";
    std::string last_name = "Doe";
    std::string full_name;

    full_name += first_name;
    full_name += " ";
    full_name = full_name + last_name;
    std::cout << full_name;


    std::cout << "Before operations : " << myWord << std::endl;
    std::cout << "String size() : " << myWord.size() << std::endl;
    std::cout << "String length() : " << myWord.length() << std::endl;

    // Access a letter
    myWord[1] = 'R';
    std::cout << "After operations : " << myWord << std::endl;

    // Access a letter
    myWord.at(0) = 'F';
    std::cout << "After operations : " << myWord << std::endl;

    // Compare strings
    std::cout << "please input a word to compare" << std::endl;
    std::cin >> myInput;

    if (myWord == myInput) {
        std::cout << "The words are equals" << std::endl;
    }
    else {
        std::cout << "The words are different" << std::endl;
    }

    // Find an occurence
    std::string str1("I love C++");
    std::cout << std::endl;
    std::cout << "String example : " << str1 << std::endl;
    std::cout << "index of first occurence of l = " << str1.find('l') << std::endl;
    std::cout << "index of not found occurence of l = " << str1.find('a') << std::endl;

    // Not Found
    if (str1.find('a') > str1.length()) {
        std::cout << "Not found a" << std::endl;
    }

    // Find a whole string
    std::string str2("C++");
    std::cout << "index of first occurence of C++ = " << str1.find(str2) << std::endl;

    // Cut in a string
    std::string str3 = "love";
    std::cout << "What is in the 3rd place" << str1.substr(3) << std::endl;
    std::cout << "What is in the 3rd place (5 long) " << str1.substr(3, 5) << std::endl;
    std::cout << "What is in the 3rd place (5 long) " << str1.substr(str1.find(str3), str3.size()) << std::endl;

    std::cout << std::endl;
    std::cout << "Let's concat some strings" << std::endl;
    std::string concatInput;
    std::string concatResult;

    // empty input buffer before fresh use
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    concatResult = " is ";
    concatResult = "this " + concatResult;
    concatResult = concatResult + " my results : ";
    concatResult.push_back('\n');
    concatResult.pop_back();

    for (size_t i = 0; i < 4; i++)
    {
        std::cout << "String #" << i << "/4" << std::endl;
        std::getline(std::cin, concatInput);

        // Check if empty
        if (!concatInput.empty()) {
            concatResult += concatInput;
        }

    }
    std::cout << concatResult << std::endl;

    // Clear a string
    concatResult.clear();
    
    std::cout << "Concat result cleared :" << std::endl;
    std::cout << concatResult;

    std::string str;

    std::string base = "this is a test string.";
    std::string str4 = base;
    str4.replace(9, 5, str2);          // "this is an example string." (1)

}
