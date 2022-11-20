#include "phonebook.hpp"

void    print_contact(Contact *book, int nbr)
{
    std::cout << "First Name : " << book[nbr].getFirstName() << std::endl;
    std::cout << "Last Name : " << book[nbr].getLastName() << std::endl;
    std::cout << "Nick Name : " << book[nbr].getNickName() << std::endl;
    std::cout << "Phone Number : " << book[nbr].getPhoneNumber() << std::endl;
    std::cout << "Your Secret : " << book[nbr].getYourSecret() << std::endl;
}

std::string myprint(std::string s)
{
    if (s.length() > 10)
        return (s.substr(0,9) + ".");
    else
        return s;
}

void    add_book(Contact **book, int i)
{
    std::string str;

    std::cout << "Enter First Name;" << std::endl;
    getline(std::cin, str);
    (*book)[i].setFirstName(str);
    
    std::cout << "Enter Last Name;" << std::endl;
    getline(std::cin, str);
    (*book)[i].setLastName(str);

    std::cout << "Enter Nick Name;" << std::endl;
    getline(std::cin, str);
    (*book)[i].setNickName(str);

    std::cout << "Enter Your Number;" << std::endl;
    getline(std::cin, str);
    (*book)[i].setPhoneNumber(str);

    std::cout << "Enter Your Secret(Cisss!);" << std::endl;
    getline(std::cin, str);
    (*book)[i].setYourSecret(str);
}

void    search_book(Contact *book, int  count)
{
    int         i;
    std::string input;

    i = 0;
    if (count <= 0)
    {
        std::cout << "No Contacts To Show." << std::endl << std::endl;
        return ;
    }
    for (i = 0 ; i < count ; i++)
    {
        std::cout << "---------------------------------" << std::endl;
        std::cout << "| " << i + 1;
        std::cout << "|" << std::setw(5) << myprint(book[i].getFirstName());
        std::cout << "|" << std::setw(5) << myprint(book[i].getLastName());
        std::cout << "|" << std::setw(5) << myprint(book[i].getNickName());
        std::cout << "|" << std::endl;
    }
    std::cout << "---------------------------------" <<std::endl;
    std::cout << "Select a contact by typing its number;" << std::endl << std::endl;
    getline(std::cin, input);
    if (input[0] > '0' && input[0] < '9' && input[1] == '\0')
        print_contact(book, stoi(input) - 1);
    std::cout << std::endl;
}  

int main(void)
{
    Contact *book;
    std::string cmd;
    int i;

    i = 0;
    book = new Contact[8];
    while (1)
    {
        getline(std::cin, cmd);
        if (cmd == "SEARCH")
            search_book(book, i);
        else if (cmd == "ADD")
        {
            if (i < 8)
                add_book(&book, i++);
            else
                add_book(&book, i % 8);
        }
        else if (cmd == "EXIT")
            break;
        else
            std::cout << "Invalid Command!" << std::endl << std::endl;
    }
    delete[] book;
    return 0;
}