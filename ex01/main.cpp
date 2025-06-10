#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int main(void)
{
    PhoneBook newBook;
    std::string input;

    do
    {
        std::cout << "Would you like to ADD, SEARCH or EXIT?" << std::endl;
        std::getline(std::cin, input);
        if (input == "ADD")
            newBook.addContact();
        else if (input == "SEARCH")
            newBook.displayContacts();
    } while (input != "EXIT");
    std::cout << "Phonebook exited." << std::endl;
}