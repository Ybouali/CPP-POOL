#include "./Harl.hpp"

int main(void)
{
    Harl h;

    std::cout << "-----------------------------------------------------------------------------------" << std::endl << std::endl << std::endl;
    h.complain("DEBUG");
    std::cout << "-----------------------------------------------------------------------------------" << std::endl << std::endl << std::endl;
    h.complain("INFO");
    std::cout << "-----------------------------------------------------------------------------------" << std::endl << std::endl << std::endl;
    h.complain("WARNING");
    std::cout << "-----------------------------------------------------------------------------------" << std::endl << std::endl << std::endl;
    h.complain("ERROR");
    std::cout << "-----------------------------------------------------------------------------------" << std::endl << std::endl << std::endl;
    h.complain("ERROR ");
    
    
    return 0;
}
