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



void PhoneBook::addContact(Contact &contact)
{
    this->contactsList[this->currentIndex] = contact;
    this->currentIndex = (this->currentIndex + 1) % 8;
    
    if (this->totalContacts < 8) {
        this->totalContacts++;
    }
}
Contact   PhoneBook::newContact()
{  
    Contact newContact;

    newContact.setFirstName(inputText("Firstname: "));
    newContact.setLastName(inputText("Lastname: "));
    newContact.setFirstName(inputText("Nickname: "));
    newContact.setFirstName(inputNum("Phonebook: "));
    newContact.setFirstName(inputText("Darkestsecret: "));
    
    return(newContact);
}