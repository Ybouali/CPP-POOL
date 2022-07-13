#include "./Phonebook.class.hpp"

Phonebook::Phonebook()
{
    return ;
}

Phonebook::~Phonebook()
{
    return ;
}

int Phonebook::get_nContacts()
{
    return this->nContact;
}

void Phonebook::set_nContacts()
{
    int i = -1;

    while (++i < MAX_CONTACT)
    {
        if (this->contacts[i].getName().empty())
            break;
    }
    this->nContact = i;
    return ;
}

void Phonebook::show_all_info_contacts(Phonebook phonebook)
{
    for (int i = 0; i < this->nContact; i++)
        phonebook.contacts[i].show_contact();
}