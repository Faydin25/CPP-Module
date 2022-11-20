#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <locale>
# include <iomanip>

class Contact
{
    public:
        void    setFirstName(std::string str);
        void    setLastName(std::string str);
        void    setNickName(std::string str);
        void    setPhoneNumber(std::string str);
        void    setYourSecret(std::string str);

        std::string getFirstName(void);
        std::string getLastName(void);
        std::string getNickName(void);
        std::string getPhoneNumber(void);
        std::string getYourSecret(void);
    private:
        int         id;  
        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        std::string _phoneNumber;
        std::string _yourSecret;
};

#endif