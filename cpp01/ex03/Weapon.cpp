/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 15:16:30 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/20 17:57:18 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Weapon.hpp"
Weapon::Weapon(){}

Weapon::Weapon(const std::string& name): type(name)
{
    std::cout << "Constructor for " << type << " was called" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "Destructor for " << type << " was called" << std::endl;
    
}

void Weapon::setType(const std::string& string)
{
    this->type = string;
}


const std::string& Weapon::getType() const
{
    return(this->type);
}