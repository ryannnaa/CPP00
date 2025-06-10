#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    Contact();
    ~Contact();
    void    setFirst(const std::string& input);
    void    setLast(const std::string& input);
    void    setNick(const std::string& input);
    void    setPhone(const std::string& input);
    void    setSecret(const std::string& input);
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    std::string getPhoneNo() const;
    std::string getSecret() const;
    void    displayFullInfo() const;
};

#endif