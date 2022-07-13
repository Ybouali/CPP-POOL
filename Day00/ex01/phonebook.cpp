#include "./Phonebook.class.hpp"

int is_str_of_numbers(std::string str) {
    
    for (int i = 0; i < (int)str.length(); i++)
    {
        if (!isdigit(str[i]))
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
        std::cout << "\033[0;33m(ADD, SEARCH, EXIT): \033[0m";
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
                std::cout << "\033[0;33mPlease enter a contact number. :: \033[0m";
                std::getline(std::cin, n);
                if (n == "EXIT")
                    exit(0);
                if (!is_str_of_numbers(n))
                {
                    int number = atoi(n.c_str());
                    if (number < 0 || number > 7)
                        std::cout << "\033[0;31mPlease enter a number bteween 0 && 7\033[0m" << std::endl;
                    else
                    {
                        if (number > nContact)
                            std::cout << "\033[0;31mThere is no contact with number :: " << number << "\033[0m" << std::endl;
                        else 
                        {
                            std::cout << "_____________________________________________" << std::endl;
                            std::cout << "|     index|first name| last name|  nickname|" << std::endl;
                            std::cout << "_____________________________________________" << std::endl;
                            phonebook[number].show_contact();
                            break;
                        }
                            
                    }
                }
            }

        }
        else if (cmd == "EXIT")
            exit(0);
        else
            std::cout << "\033[0;31m[" << cmd << "] NOT FOUND\033[0m" << std::endl;
    }
    
}