#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <limits>

static std::string truncate(const std::string& str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

PhoneBook::PhoneBook() : count(0), nextIndex(0)
{}

PhoneBook::~PhoneBook()
{}

void PhoneBook::addContact()
{
    Contact newContact;
    std::string input;

    do
    {
        std::cout << "Please enter your First Name" << std::endl;
        std::getline(std::cin, input);
    } while (input.empty());
    newContact.setFirst(input);
    do
    {
        std::cout << "Please enter your Last Name" << std::endl;
        std::getline(std::cin, input);
    } while (input.empty());
    newContact.setLast(input);
    do
    {
        std::cout << "Please enter your Nickname" << std::endl;
        std::getline(std::cin, input);
    } while (input.empty());
    newContact.setNick(input);
    do
    {
        std::cout << "Please enter your Phone Number" << std::endl;
        std::getline(std::cin, input);
    } while (input.empty());
    newContact.setPhone(input);
    do
    {
        std::cout << "Please enter your Darkest Secret" << std::endl;
        std::getline(std::cin, input);
    } while (input.empty());
    newContact.setSecret(input);
    contacts[nextIndex] = newContact;
    if (nextIndex != 7)
        nextIndex += 1;
    else
        nextIndex = 0;
    if (count != 8)
        count++;
}

void PhoneBook::displayContacts() const
{
    std::string input;
    int index;

    for (int i = 0; i < count; i++)
    {
        std::cout << std::right << std::setw(10) << i + 1 << "|"
        << std::right << std::setw(10) << truncate(contacts[i].getFirstName()) << "|"
        << std::right << std::setw(10) << truncate(contacts[i].getLastName()) << "|"
        << std::right << std::setw(10) << truncate(contacts[i].getNickname()) << "|" << std::endl;
    }
    do
    {
        std::cout << "Enter index to display" << std::endl;
        std::getline(std::cin, input);
        if (input.size() == 1 && input[0] >= '1' && input[0] <= '8')
        {
            index = input[0] - '0';
            displayContactDetails(index -1);
            break;
        }
        else
            std::cerr << "Invalid index, please use a number from 1 to 8" << std::endl;
    } while(true);
}

void PhoneBook::displayContactDetails(int index) const
{
    if (index >= 0 && index < count)
        contacts[index].displayFullInfo();
    else
        std::cerr << "Invalid index, please indicate a number from 1 to 8" << std::endl;
}