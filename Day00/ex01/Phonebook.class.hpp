#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP


# define MAX_CONTACT 8
# define MAX_LEN_GETLINE 255


#include <string>
#include <iostream>
#include <clocale>

class Contact
{
    private:
        int index;
        char * firstname;
        char * lastname;
        char * nikename;
        char * phonenumber;
        char * darkestsecret;

    public:
        Contact();
        ~Contact();
        void add_contact(int index);
        void show_contact();
};

#endif