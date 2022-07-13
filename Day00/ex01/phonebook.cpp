#include "./Phonebook.class.hpp"

int is_str_of_numbers(std::string str) {
    
    for (int i = 0; i < (int)str.length(); i++)
    {
        if (!isdigit(str[i]))
            return 1;
    }
    return 0;
}

void ft_header()
{
    std::cout << "_____________________________________________" << std::endl;
    std::cout << "|     index|first name| last name|  nickname|" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
}

int main()
{
    Phonebook p;
    std::string cmd;
    std::string n;
    int nToAddContact = -1;
    while (1)
    {
        std::cout << "\033[0;33m(ADD, SEARCH, EXIT): \033[0m";
        if (!std::getline(std::cin, cmd))
            break;
        if (cmd == "ADD")
        {
            ++nToAddContact;
            if (nToAddContact >= MAX_CONTACT)
                nToAddContact = 0;
            p.setContact(nToAddContact);
            p.set_nContacts();
        }
        else if (cmd == "SEARCH")
        {
            while (1)
            {
                if (p.get_nContacts() == 0)
                {
                    std::cout << "\033[1;31mThere is no contact, Please ADD some contacts !!\033[0m" << std::endl;
                    break;
                }
                std::cout << "\033[0;33mPlease enter a contact number. :: \033[0m";
                std::getline(std::cin, n);
                if (n == "EXIT")
                    exit(0);
                if (n.empty())
                {
                    ft_header();
                    p.show_all_info_contacts(p);
                    break;
                }
                else if (is_str_of_numbers(n))
                    std::cout << "\033[0;31mPlease enter a number bteween 0 && 7\033[0m" << std::endl;
                else
                {
                    int number = atoi(n.c_str());
                    if (number < 0 || number > 7)
                        std::cout << "\033[0;31mPlease enter a number bteween 0 && 7\033[0m" << std::endl;
                    else
                    {
                        if (number > p.get_nContacts())
                            std::cout << "\033[0;31mThere is no contact with number :: " << number << "\033[0m" << std::endl;
                        else 
                        {
                            ft_header();
                            p.getContact(number);
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