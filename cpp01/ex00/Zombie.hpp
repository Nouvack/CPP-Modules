/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 15:58:04 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/19 17:06:21 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
class Zombie
{
    private:
        std::string _name;
    public:
        Zombie(const std::string &name);
        ~Zombie();
        void announce(void);
};

void randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif

