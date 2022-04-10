#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    PhoneBook   myphonebook;
    std::string str;

    while(1)
    {
        std::cout << "\nWELCOME TO MYPHONEBOOK!\n\n ADD    [add new contact]\n SEARCH [find contact]\n EXIT   [close MyPhonebook]\n";
        std::cin >> str;
        if (str == "EXIT")
            exit(0);
        else if (str == "ADD")
            myphonebook.add_contact();
        else if (str == "SEARCH")
            myphonebook.print_contacts();
        else
            system("clear");
    }
}