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
        std::cin.getline(this->firstname, MAX_LEN_GETLINE);
        if ((int)strlen(this->firstname) > 0) 
            break;
    }

    while (1)
    {
        std::cout << "Please enter a last name      :: ";
        std::cin.getline(this->lastname, MAX_LEN_GETLINE);
        if ((int)strlen(this->lastname) > 0) 
            break;
    }

    while (1)
    {
        std::cout << "Please enter a nike name      :: ";
        std::cin.getline(this->nikename, MAX_LEN_GETLINE);
        if ((int)strlen(this->nikename) > 0) 
            break;
    }

    while (1)
    {
        std::cout << "Please enter a phone number   :: ";
        std::cin.getline(this->phonenumber, MAX_LEN_GETLINE);
        if ((int)strlen(this->phonenumber) > 0) 
            break;
    }

    while (1)
    {
        std::cout << "Please enter a darkest secret :: ";
        std::cin.getline(this->darkestsecret, MAX_LEN_GETLINE);
        if ((int)strlen(this->darkestsecret) > 0) 
            break;
    }

    std::cout << "Contact with name :: " << this->firstname << " Has been added successfully !!" << std::endl;
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