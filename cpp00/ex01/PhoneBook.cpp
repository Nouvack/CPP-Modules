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

PhoneBook::PhoneBook() : _totalContacts(0), _currentIndex(0) { }

void PhoneBook::addContact(const Contact &contact)
{
    if (contact.getFirstName().empty()) {
        std::cout << "Operation aborted." << std::endl;
        return; 
    }
    this->_contactsList[this->_currentIndex] = contact;
    this->_currentIndex = (this->_currentIndex + 1) % 8;
    if (this->_totalContacts < 8) {
        this->_totalContacts++;
    }
}

Contact PhoneBook::newContact(void)
{  
    Contact newContact;
    std::string input;

    input = inputText("Firstname: ");
    if (input.empty()) 
        return Contact(); 
    newContact.setFirstName(input);

    input = inputText("Lastname: ");
    if (input.empty()) 
        return Contact(); 
    newContact.setLastName(input);

    input = inputText("Nickname: ");
    if (input.empty()) 
        return Contact(); 
    newContact.setNickname(input);

    input = inputNum("Phonenumber: ");
    if (input.empty()) 
        return Contact(); 
    newContact.setPhoneNumber(input);

    input = inputText("Darkestsecret: ");
    if (input.empty()) 
        return Contact(); 
    newContact.setDarkestSecret(input);

    return newContact;
}

void PhoneBook::printContacts()
{
    const int width = 10;
    std::string str;
    
    if (_totalContacts == 0) {
        std::cout << "Phonebook is empty." << std::endl;
        return;
    }
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
                    << std::setw(width) << formatField(_contactsList[i].getFirstName()) << "|"
                    << std::setw(width) << formatField(_contactsList[i].getLastName()) << "|"
                    << std::setw(width) << formatField(_contactsList[i].getNickname()) << "|\n";
    }
    str = inputIndex("Select an index: ", _totalContacts);
    if (str.empty()) {
        return; 
    }
    displayName(str);
}

void PhoneBook::displayName(std::string index)
{
    int i = index[0] - '0';
    std::cout << "Firstname: " + _contactsList[i].getFirstName() << std::endl;
    std::cout << "Lastname: " + _contactsList[i].getLastName() << std::endl;
    std::cout << "Nickname: " + _contactsList[i].getNickname() << std::endl;
    std::cout << "Phonenumber: " + _contactsList[i].getPhoneNumber() << std::endl;
    std::cout << "Darkestsecret: " + _contactsList[i].getDarkestSecret() << std::endl;
}