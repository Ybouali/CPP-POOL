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

void Phonebook::setContact(int nToAddContact)
{
    this->contacts[nToAddContact].add_contact(nToAddContact);
}

void Phonebook::getContact(int numberOfContact)
{
    // p.contacts[number].show_contact();
    this->contacts[numberOfContact].show_contact();
}