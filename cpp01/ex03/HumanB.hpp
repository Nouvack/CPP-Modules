/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 16:59:45 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/20 17:45:28 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"
class HumanB
{
    private:
        std::string _name;
        Weapon* _weapon;
    public:
        HumanB(const std::string&);
        ~HumanB();
        void attack(void);
        void setWeapon(Weapon&);
};


#endif