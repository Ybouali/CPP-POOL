#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "./Contact.class.hpp"

class Phonebook
{
    private:
        int nContact;

    public:
        Contact contacts[MAX_CONTACT];
        Phonebook();
        ~Phonebook();
        void set_nContacts();
        int get_nContacts();
        void show_all_info_contacts(Phonebook phonebook);
};


#endif
