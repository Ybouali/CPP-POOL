#include <iostream>

int main(void)
{
    std::string string1 = "HI THIS IS BRAIN";
    std::string *stringPTR;
    std::string &stringREF = string1;

    stringPTR = &string1;

    std::cout << "The address of the string         :: " << &string1 << std::endl;
    std::cout << "The address held by stringRTP     :: " << stringPTR << std::endl;
    std::cout << "The address held by stringREF     :: " << &stringREF << std::endl << std::endl;
    
    std::cout << "The value of the string variable  :: " << string1 << std::endl;
    std::cout << "The value pointed to by stringRTP :: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringRTP :: " << stringREF << std::endl;
    return 0;
}
