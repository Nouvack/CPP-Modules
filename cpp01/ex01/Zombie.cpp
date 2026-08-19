/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 16:17:54 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/18 15:14:28 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie::Zombie()
{}



void Zombie::announce(void)
{
    std::cout << this->name + "BraiiiiiiinnnzzzZ...";
}