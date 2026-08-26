/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 17:04:25 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/26 17:30:01 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ClapTrap.hpp"
class FragTrap : public ClapTrap
{
    private:
        
    public:
        FragTrap(/* args */);
        FragTrap(const std::string&);
        FragTrap(const FragTrap&);
        FragTrap& operator=(const FragTrap&);
        ~FragTrap();
        
        void highFivesGuys();
};

#endif
