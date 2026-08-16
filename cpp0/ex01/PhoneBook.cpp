/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 15:10:18 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/14 17:51:27 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : totalContacts(0), currentIndex(0) { }

void PhoneBook::addContact(const Contact &contact)
{
    this->contactsList[this->currentIndex] = contact;
    this->currentIndex = (this->currentIndex + 1) % 8;
    if (this->totalContacts < 8) {
        this->totalContacts++;
    }
}
Contact   PhoneBook::newContact(void)
{  
    Contact newContact;

    newContact.setFirstName(inputText("Firstname: "));
    newContact.setLastName(inputText("Lastname: "));
    newContact.setNickname(inputText("Nickname: "));
    newContact.setPhoneNumber(inputNum("Phonebook: "));
    newContact.setDarkestSecret(inputText("Darkestsecret: "));
    return(newContact);
}

void PhoneBook::printContacts()
{
    const int width = 10;
    std::string str;
    std::cout << std::right << "|"
                << std::setw(width) << "Index" << "|"
                << std::setw(width) << "Name"  << "|"
                << std::setw(width) << "Last Name" << "|"
                << std::setw(width) << "Nickname" << "|\n";
    std::cout << std::setfill('-') 
                << "|" << std::setw(width) << "-" 
                << "|" << std::setw(width) << "-" 
                << "|" << std::setw(width) << "-" 
                << "|" << std::setw(width) << "-" << "|\n";
    std::cout << std::setfill(' ');

    for(int i = 0; i < 8; i++)
    {
        std::cout << std::right << "|"
                    << std::setw(width) << i << "|"
                    << std::setw(width) << (contactsList[i].getFirstName().length() > 10 ?
                        contactsList[i].getFirstName().substr(0, 9) + "." :
                        contactsList[i].getFirstName())  << "|"
                    << std::setw(width) << (contactsList[i].getLastName().length() > 10 ?
                        contactsList[i].getLastName().substr(0, 9) + "." :
                        contactsList[i].getLastName()) << "|"
                    << std::setw(width) << (contactsList[i].getNickname().length() > 10 ?
                        contactsList[i].getNickname().substr(0, 9) + "." :
                        contactsList[i].getNickname()) << "|\n";
    }
    str = inputIndex("Select an index: ", totalContacts);
    displayName(str);
}
//DISPLAY EL NAME DEL INDEX SELECCIONADOA

void PhoneBook::displayName(std::string index)
{
    int i = index[0] - '0';
    std::cout << "Firstname: " + contactsList[i].getFirstName() << std::endl;
    std::cout << "Lastname: " + contactsList[i].getLastName() << std::endl;
    std::cout << "Nickname: " + contactsList[i].getNickname() << std::endl;
    std::cout << "Phonenumber: " + contactsList[i].getPhoneNumber() << std::endl;
    std::cout << "Darkestsecret: " + contactsList[i].getDarkestSecret() << std::endl;

}