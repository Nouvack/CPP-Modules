/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 16:06:13 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/28 14:49:06 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
        
    public:
        ScavTrap(/* args */);
        ScavTrap(const std::string&);
        ScavTrap(const ScavTrap&);
        ScavTrap& operator=(const ScavTrap&);
        ~ScavTrap();
        
        void attack(const std::string& target);
        void guardGate();
};

#endif
