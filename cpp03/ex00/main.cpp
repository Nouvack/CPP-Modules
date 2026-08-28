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

int main( void ) {
    
    ClapTrap noam("Noam");

    noam.takeDamage(20);
    noam.attack("Marvin");
    noam.beRepaired(10);

    return 0;
}