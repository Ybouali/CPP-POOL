#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP


# define MAX_CONTACT 8
# define MAX_LEN_GETLINE 255


#include <string>
#include <iostream>
#include <clocale>
#include <iomanip> 

class Contact
{
    private:
        int index;
        std::string firstname;
        std::string lastname;
        std::string nikename;
        std::string phonenumber;
        std::string darkestsecret;

    public:
        Contact();
        ~Contact();
        void add_contact(int index);
        void show_all_info_contact();
        void show_str_with_rules(std::string str);
        void show_contact();
};

#endif