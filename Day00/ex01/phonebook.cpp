#include "./Phonebook.class.hpp"

int main()
{
    Contact phonebook[MAX_CONTACT];
    std::string cmd;
    int nContact = -1;
    while (1)
    {
        std::cout << "(ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, cmd))
            break;
        if (cmd == "ADD")
        {
            ++nContact;
            if (nContact >= MAX_CONTACT)
                std::cout << "Too many contacts!" << std::endl;
            else
                phonebook[nContact].add_contact(nContact);
        }
        else if (cmd == "SEARCH")
        {
            while (1)
            {
                std::cout << "Please enter a contact number.";
                if (!std::getline(std::cin, cmd))
                {
                    std::cout << "You did not enter a number of contact" << std::endl;
                    break;
                }
                

            }
            
        }
        
    }
    
}