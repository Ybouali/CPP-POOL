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
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
    return ;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    return ;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
    return ;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    return ;
}

void Harl::complain(std::string level)
{
    std::string level_s[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    typedef void(Harl::*f)(void);
    f flevel[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    int i = -1;
    while (++i < 4)
    {
        if (level  == level_s[i])
        {
            (this->*flevel[i])();
            break;
        }
    }
    if (i == 4)
    {
        std::cout << level << " IS NOT A LEVEL" << std::endl;
        return ;
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
    default:
        break;
    }
    return ;
}