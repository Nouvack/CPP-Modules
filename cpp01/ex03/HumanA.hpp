/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 15:29:57 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/20 17:43:26 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"
class HumanA
{
    private:
        std::string _name;
        Weapon& _weapon;
    public:
        HumanA(const std::string&,Weapon&);
        ~HumanA();
        void attack(void);
};


#endif