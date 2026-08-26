/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 15:16:45 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/25 15:16:45 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int main( void ) {
    
    ClapTrap noam("Noam");
    
    noam.takeDamage(20);
    noam.attack("Marvin");
    noam.beRepaired(10);
    
    std::cout << "--------------------------" << std::endl;
    ScavTrap marvin("Marvin");

    marvin.takeDamage(200);
    marvin.attack("Noam"),
    marvin.beRepaired(2);
    marvin.guardGate();

    std::cout << "--------------------------" << std::endl;
    FragTrap pedro("Pedro");
    
    pedro.attack("Marvin");
    pedro.beRepaired(10);
    pedro.highFivesGuys();
    pedro.takeDamage(10);
    std::cout << "--------------------------" << std::endl;


    return 0;
}