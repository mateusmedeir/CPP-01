#include <iostream>

int main() {
    std::string stringINI = "HI THIS IS BRAIN";
    std::string *stringPTR = &stringINI;
    std::string &stringREF = stringINI;

    std::cout << "stringINI address: " << &stringINI << std::endl;
    std::cout << "stringPTR address: " << stringPTR << std::endl;
    std::cout << "stringREF address: " << &stringREF << std::endl;

    std::cout << "stringINI value: " << stringINI << std::endl;
    std::cout << "stringPTR value: " << *stringPTR << std::endl;
    std::cout << "stringREF value: " << stringREF << std::endl;
}