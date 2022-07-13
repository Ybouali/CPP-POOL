#include "./Phonebook.class.hpp"

Contact::Contact()
{
    return;
}

Contact::~Contact()
{
    return;
}

void Contact::add_contact(int index)
{
    this->index = index;
    std::cout << "Adding contact number         :: " << this->index<< std::endl;

    while (1)
    {
        std::cout << "\033[1;34mPlease enter a first name     :: \033[0m";
        std::getline(std::cin, this->firstname);
        if (!this->firstname.empty())
            break;
    }

    while (1)
    {
        std::cout << "\033[1;34mPlease enter a last name      :: \033[0m";
        std::getline(std::cin, this->lastname);
        if (!this->lastname.empty()) 
            break;
    }

    while (1)
    {
        std::cout << "\033[1;34mPlease enter a nike name      :: \033[0m";
        std::getline(std::cin, this->nikename);
        if (!this->nikename.empty()) 
            break;
    }

    while (1)
    {
        std::cout << "\033[1;34mPlease enter a phone number   :: \033[0m";
        std::getline(std::cin ,this->phonenumber);
        if (!this->phonenumber.empty() && is_str_of_numbers(this->phonenumber))
            std::cout << "\033[0;31mPhone number cannot contain a character !!\033[0m" << std::endl;
        else if (!this->phonenumber.empty()) 
            break;
    }

    while (1)
    {
        std::cout << "\033[1;34mPlease enter a darkest secret :: \033[0m";
        std::getline(std::cin, this->darkestsecret);
        if (!this->darkestsecret.empty()) 
            break;
    }

    std::cout << "\033[1;32mContact with name :: " << "[" << this->firstname << "]" << " Has been added successfully !!\033[0m" << std::endl;
}

void Contact::show_str_with_rules(std::string str)
{
    if (str.length() <= 10)
		std::cout << std::setw(10) << str << "|";
	else
		std::cout << str.substr(0, 9) << ".|";
}

std::string Contact::getName()
{
    return this->firstname;
}

void Contact::show_contact()
{
    std::cout << "|" << "         " << this->index << "|";
	show_str_with_rules(this->firstname);
	show_str_with_rules(this->lastname);
	show_str_with_rules(this->nikename);
	std::cout << std::endl;
    std::cout << "_____________________________________________" << std::endl;
}

void Contact::show_all_info_contact()
{
    std::cout << "INDEX          :: " << this->index << std::endl;
    std::cout << "FIRST NAME     :: " << this->firstname << std::endl;
    std::cout << "LAST NAME      :: " << this->lastname << std::endl;
    std::cout << "NICK NAME      :: " << this->nikename << std::endl;
    std::cout << "PHONE NUMBER   :: " << this->phonenumber << std::endl;
    std::cout << "DARKEST SECRET :: " << this->darkestsecret << std::endl;
}