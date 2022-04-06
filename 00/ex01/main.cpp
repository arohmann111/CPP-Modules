#include "Contact.hpp"

int main()
{
    std::string str;
    std::cout << "\nWELCOME TO MYPHONEBOOK!\n\n ADD [add new contact]\n SEARCH [find contact]\n EXIT [close MyPhonebook]\n";
    while(1)
    {
        std::cin >> str;
        std::cout << str;
        if (str.compare("EXIT")== 0)
            exit(0);
        else if (str.compare("ADD") == 0)
        {

        }
        else if (str.compare("SEARCH") == 0)
        {

        }
    }
}