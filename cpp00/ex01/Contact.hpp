/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 16:16:27 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/13 15:07:37 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

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
        void setFirstName(const std::string&);
        void setLastName(const std::string&);
        void setNickname(const std::string&);
        void setPhoneNumber(const std::string&);
        void setDarkestSecret(const std::string&);
        const std::string& getFirstName() const;
        const std::string& getLastName() const;
        const std::string& getNickname() const;
        const std::string& getPhoneNumber() const;
        const std::string& getDarkestSecret() const;
        Contact();
        
};
#endif
