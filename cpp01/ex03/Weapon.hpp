/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 15:16:41 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/20 17:32:54 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>
class Weapon
{
    private:
        std::string type;
    public:
        Weapon();
        Weapon(const std::string&);
        ~Weapon();
        void setType(const std::string&);
        const std::string& getType() const;

};



#endif