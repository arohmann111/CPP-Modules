#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook {
    public:
        PhoneBook();
        void print_contacts();
        void add_contact(void);
    private:
        int     _num;
        Contact _contacts[8];
    };
#endif