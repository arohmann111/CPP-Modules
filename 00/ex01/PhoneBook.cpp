#include "PhoneBook.hpp"
#include <sstream>

PhoneBook::PhoneBook()
{
    this->_num = 0;
}
void PhoneBook::add_contact()
{
    if (this->_num < 8)
    {
        this->_contacts[this->_num].new_contact();
        ++this->_num;
    }
    else
    {
        this->_contacts[7].new_contact();
    }
}
void PhoneBook::print_contacts()
{
    std::string str;
    int         x;

    if (this->_num > 0 )
    {
        std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
        for (int i = 0; i < this->_num; ++i)
        {
            std::cout << "|" << std::setw(10) << i;
            this->_contacts[i].print_contact();
        }
        std::cout << "Enter id to see more: ";
        std::cin.ignore();
	    std::getline(std::cin, str);
        std::stringstream convert(str);
        convert >> x;
        std::cout << "\nFirst Name: " << this->_contacts[x].get_Name() << std::endl;
        std::cout << "Last Name: " << this->_contacts[x].get_LastName() << std::endl;
        std::cout << "Nick Name: " << this->_contacts[x].get_NickName() << std::endl;
        std::cout << "Number: " << this->_contacts[x].get_Number() << std::endl;
        std::cout << "Secret: " << this->_contacts[x].get_Secret() << std::endl;
    }
    else
        std::cout << "\nMyPhoneBook is still empty!" << std::endl;
}