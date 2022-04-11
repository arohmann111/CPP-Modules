#include "Contact.hpp"

void    Contact::new_contact()
{
	std::cout << "Name: ";
	while (std::getline(std::cin, this->FirstName) && this->FirstName.empty())
		std::cout << "Not a valid input!\n";
	std::cout << "Last Name: ";
	while (std::getline(std::cin, this->LastName) && this->LastName.empty())
		std::cout << "Not a valid input!\n";
	std::cout << "Nickname: ";
	while (std::getline(std::cin, this->NickName) && this->NickName.empty())
		std::cout << "Not a valid input!\n";
	std::cout << "Phone: ";
	while (std::getline(std::cin, this->PhoneNumber) && this->PhoneNumber.empty())
		std::cout << "Not a valid input!\n";
	std::cout << "Your darkest secret: ";
	while (std::getline(std::cin, this->DarkestSecret) && this->DarkestSecret.empty())
		std::cout << "Not a valid input!\n";
}

 void    Contact::print_contact()
 {
    std::cout << "|" << std::setw(10) << (this->FirstName.length() > 10 ? this->FirstName.substr(0, 9) + "." : this->FirstName);
    std::cout << "|" << std::setw(10) << (this->LastName.length() > 10 ? this->LastName.substr(0, 9) + "." : this->LastName);
    std::cout << "|" << std::setw(10) << (this->NickName.length() > 10 ? this->NickName.substr(0, 9) + "." : this->NickName) << "|" << std::endl;
 }