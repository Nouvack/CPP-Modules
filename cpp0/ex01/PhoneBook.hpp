/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 14:48:34 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/14 17:51:01 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "Utils.hpp"
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contactsList[8];
        int totalContacts;
    public:
        PhoneBook(/* args */);
        int currentIndex;
        Contact   newContact();
        void addContact(const Contact &contact);
        void printContacts();
        void displayName(std::string index);


};



#endif