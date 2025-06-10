#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
    Contact contacts[8];
    int     count;
    int     nextIndex;

public:
    PhoneBook();
    ~PhoneBook();
    void    addContact();
    void    displayContacts() const;
    void    displayContactDetails(int index) const;
};

#endif