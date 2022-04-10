#include "Contact.hpp"

void    Contact::new_contact()
{
	std::cout << "Name: ";
    std::cin.ignore();
	std::getline(std::cin, FirstName);
	std::cout << "Last Name: ";
	std::getline(std::cin, LastName);
	std::cout << "Nickname: ";
	std::getline(std::cin, NickName);
	std::cout << "Phone: ";
	std::getline(std::cin, PhoneNumber);
	std::cout << "Your darkest secret: ";
    std::getline(std::cin, DarkestSecret);
}

 void    Contact::print_contact()
 {
    std::cout << "|" << std::setw(10) << (this->FirstName.length() > 10 ? this->FirstName.substr(0, 9) + "." : this->FirstName);
    std::cout << "|" << std::setw(10) << (this->LastName.length() > 10 ? this->LastName.substr(0, 9) + "." : this->LastName);
    std::cout << "|" << std::setw(10) << (this->NickName.length() > 10 ? this->NickName.substr(0, 9) + "." : this->NickName) << "|" << std::endl;
 }