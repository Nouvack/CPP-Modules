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


#include "Contact.hpp"
#include <string>
#include <iostream>
#include "Utils.hpp"

class PhoneBook
{
    private:
        Contact contactsList[8];
        int totalContacts;
    public:
        PhoneBook(/* args */);
        Contact   newContact();
        void addContact(Contact &contact);
        int currentIndex;

};



#endif