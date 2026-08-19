/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 16:43:43 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/19 17:16:13 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::cout<< "HEAP ALLOCATION" << std::endl;
    Zombie* x = newZombie("Mar");
    x->announce();
    delete x;
    std::cout<< "----------------------------------------" << std::endl;
    std::cout<< "STACK ALLOCATION" << std::endl;
    Zombie z("Noam");
    z.announce();
    randomChump("Pancracio");
    

    return 0;
}
