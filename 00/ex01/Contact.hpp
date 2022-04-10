#ifndef CONTACT_H
# define CONTACT_H

#include <string>
#include <iostream>
#include <iomanip>

class Contact{

    public:
        Contact() {}
        void    print_contact();
        void    get_contact(int id);
        void    new_contact();
        std::string get_Name()
        {
            return (FirstName);
        }
        std::string get_LastName()
        {
            return (LastName);
        }
        std::string get_NickName()
        {
            return (NickName);
        }
        std::string get_Number()
        {
            return (PhoneNumber);
        }
        std::string get_Secret()
        {
            return (DarkestSecret);
        }
    private:
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string PhoneNumber;
        std::string DarkestSecret;
    };
#endif