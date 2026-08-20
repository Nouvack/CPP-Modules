/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 17:01:02 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/20 17:45:19 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name): _name(name), _weapon(NULL) {
    std::cout << "Constructor for " << _name << " was called" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "Destructor for " << _name << " was called" << std::endl;
}
void HumanB::attack(void)
{
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
}
