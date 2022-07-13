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
        std::cout << "Please enter a first name     :: ";
        std::getline(std::cin, this->firstname);
        if (!this->firstname.empty())
            break;
    }

    while (1)
    {
        std::cout << "Please enter a last name      :: ";
        std::getline(std::cin, this->lastname);
        if (!this->lastname.empty()) 
            break;
    }

    while (1)
    {
        std::cout << "Please enter a nike name      :: ";
        std::getline(std::cin, this->nikename);
        if (!this->nikename.empty()) 
            break;
    }

    while (1)
    {
        std::cout << "Please enter a phone number   :: ";
        std::getline(std::cin ,this->phonenumber);
        if (!this->phonenumber.empty()) 
            break;
    }

    while (1)
    {
        std::cout << "Please enter a darkest secret :: ";
        std::getline(std::cin, this->darkestsecret);
        if (!this->darkestsecret.empty()) 
            break;
    }

    std::cout << "Contact with name :: " << "[" << this->firstname << "]" << " Has been added successfully !!" << std::endl;
}

void Contact::show_contact()
{
    std::cout << "Index         :: " << this->index;
    std::cout << "first name    :: " << this->firstname;
    std::cout << "lastname      :: " << this->lastname;
    std::cout << "nikename      :: " << this->nikename;
    std::cout << "phonenumber   :: " << this->phonenumber;
    std::cout << "darkestsecret :: " << this->darkestsecret << std::endl;
}