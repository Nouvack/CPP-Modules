/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 17:19:12 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/20 11:42:37 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if(N < 0)
        return(NULL);
        
    Zombie* horde = new(std::nothrow) Zombie[N];
    if (horde == NULL)
		return (NULL);
        
    for(int i = 0;i < N;i++)
    {
        horde[i].setName(name);
    }
    return(horde);
}