/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 15:30:06 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/20 17:43:21 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
HumanA::HumanA(const std::string& name,  Weapon& weapon): _name(name), _weapon(weapon) {
    std::cout << "Constructor for " << _name << " was called" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "Destructor for " << _name << " was called" << std::endl;
}
void HumanA::attack(void)
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
