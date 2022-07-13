#include "./Phonebook.class.hpp"

int is_str_of_numbers(std::string str) {
    
    for (int i = 0; i < (int)str.length(); i++)
    {
        if (!isalnum(str[i]))
            return 1;
    }
    return 0;
}

int main()
{
    Contact phonebook[MAX_CONTACT];
    std::string cmd;
    int nContact = -1;
    std::string n;
    while (1)
    {
        std::cout << "(ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, cmd))
            break;
        if (cmd == "ADD")
        {
            ++nContact;
            if (nContact >= MAX_CONTACT)
                nContact = 0;
            phonebook[nContact].add_contact(nContact);
        }
        else if (cmd == "SEARCH")
        {
            while (1)
            {
                std::cout << "Please enter a contact number. :: ";
                std::getline(std::cin, n);
                if (!is_str_of_numbers(n))
                {
                    int number = atoi(n.c_str());
                    std::cout << number << std::endl;
                }
            }

        }
        
    }
    
}