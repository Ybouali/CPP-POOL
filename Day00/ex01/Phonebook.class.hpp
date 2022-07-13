#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "./Contact.class.hpp"

int is_str_of_numbers(std::string str);

class Phonebook
{
    private:
        int nContact;
        Contact contacts[MAX_CONTACT];

    public:
        Phonebook();
        ~Phonebook();
        void set_nContacts();
        int get_nContacts();
        void show_all_info_contacts(Phonebook phonebook);
        void setContact(int nToAddContact);
        void getContact(int numberOfContact);
};


#endif
