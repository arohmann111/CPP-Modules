#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook {
    public:
        void getContact(int id);
    private:
        Contact contacts[8];
    };
#endif