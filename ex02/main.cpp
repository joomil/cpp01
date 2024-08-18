#include <iostream>
#include <string>

int main() {
    // Step 1: Initialize a string variable
    std::string str = "HI THIS IS BRAIN";

    // Step 2: Create a pointer to the string variable
    std::string* strPTR = &str;

    // Step 3: Create a reference to the string variable
    std::string& strREF = str;

    // Step 4: Print the memory addresses
    std::cout << "Memory address of the string variable: " << &str << std::endl;
    std::cout << "Memory address held by stringPTR: " << strPTR << std::endl;
    std::cout << "Memory address held by stringREF: " << &strREF << std::endl;

    // Step 5: Print the values
    std::cout << "Value of the string variable: " << str << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *strPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << strREF << std::endl;

    return 0;
}
