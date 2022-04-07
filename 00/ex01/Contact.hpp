#ifndef CONTACT_H
# define CONTACT_H

#include <string>
#include <iostream>
#include <iomanip>

class Contact{

    public:
        Contact() {}
        Contact(int id);
        ~Contact();
    void printContact();
    private:
    
    int         id;
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkestSecret;
    };
#endif