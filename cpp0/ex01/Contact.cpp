/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 14:46:56 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/04 11:48:48 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(const std::string &firstName)
{
    this->firstName = firstName;
}

void Contact::setLastName(const std::string &lastName)
{
    printf("ASD");
    this->lastName = firstName;
}
void Contact::setNickname(const std::string &nickname)
{
    this->nickname = nickname;
}
void Contact::setPhoneNumber(const std::string &phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(const std::string &darkestSecret)
{
    this->darkestSecret = darkestSecret;
}

const std::string &Contact::getFirstName() const
{
    return(firstName);
}

const std::string &Contact::getLastName() const
{
    return(lastName);
}

const std::string &Contact::getNickname() const
{
    return(nickname);
}

const std::string &Contact::getPhoneNumber() const
{
    return(phoneNumber);
}

const std::string &Contact::getDarkestSecret() const
{
    return(darkestSecret);
}