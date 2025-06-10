#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <limits>

Contact::Contact()
{}

Contact::~Contact()
{}

void Contact::setFirst(const std::string& input)
{
    firstName = input;
}

void Contact::setLast(const std::string& input)
{
    lastName = input;
}

void Contact::setNick(const std::string& input)
{
    nickName = input;
}

void Contact::setPhone(const std::string& input)
{
    phoneNumber = input;
}

void Contact::setSecret(const std::string& input)
{
    darkestSecret = input;
}

std::string Contact::getFirstName() const
{
    return (firstName);
}

std::string Contact::getLastName() const
{
    return (lastName);
}

std::string Contact::getNickname() const
{
    return (nickName);
}

std::string Contact::getPhoneNo() const
{
    return (phoneNumber);
}

std::string Contact::getSecret() const
{
    return (darkestSecret);
}

void Contact::displayFullInfo() const
{
    std::cout << firstName << std::endl;
    std::cout << lastName << std::endl;
    std::cout << nickName << std::endl;
    std::cout << phoneNumber << std::endl;
    std::cout << darkestSecret << std::endl;
}