#include "./Harl.hpp"

Harl::Harl()
{
    return ;
}

Harl::~Harl()
{
    return ;
}

void Harl::debug(void)
{
    std::cout<< "[DEBUG] "<< std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
    return ;
}

void Harl::info(void)
{
    std::cout<< "[INFO] "<< std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    return ;
}

void Harl::warning(void)
{
    std::cout<< "[WARNING] "<< std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
    return ;
}

void Harl::error(void)
{
    std::cout<< "[ERROR] "<< std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    return ;
}

void Harl::complain(std::string level)
{
    std::string level_s[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int i = -1;
    while (++i < 4)
    {
        if (level  == level_s[i])
            break;
    }

    switch (i)
    {
        case 0:
            this->debug();
        case 1:
            this->info();
        case 2:
            this->warning();
        case 3:
            this->error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return ;
}