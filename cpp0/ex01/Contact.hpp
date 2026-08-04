/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 16:16:27 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/04 11:39:49 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
#include <iostream>

class Contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
    public:
        
    
        void setFirstName(const std::string &firstName);
        void setLastName(const std::string &lastName);
        void setNickname(const std::string &nickname);
        void setPhoneNumber(const std::string &phoneNumber);
        void setDarkestSecret(const std::string &darkestSecret);
        
        const std::string &getFirstName() const;
        const std::string &getLastName() const;
        const std::string &getNickname() const;
        const std::string &getPhoneNumber() const;
        const std::string &getDarkestSecret() const;
            
        
        Contact();
        Contact(const std::string &firstName, const std::string &lastName,
			const std::string &nickname, const std::string &phoneNumber,
			const std::string &darkestSecret);
        
};
#endif



