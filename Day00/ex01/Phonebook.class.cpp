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

    std::cout << "Adding contact number :: " << this->index << std::endl;

    std::cout << "Please enter a first name:: ";
    std::getline(std::cin, this->firstname);

    std::cout << "Please enter a last name:: ";
    std::getline(std::cin, this->lastname);

    std::cout << "Please enter a nike name:: ";
    std::getline(std::cin, this->nikename);

    std::cout << "Please enter a phone number:: ";
    std::getline(std::cin, this->phonenumber);

    std::cout << "Please enter a darkest secret:: ";
    std::getline(std::cin, this->darkestsecret);

    std::cout << "Contact number :: " << this->index << "Has ben added !!" << std::endl;
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