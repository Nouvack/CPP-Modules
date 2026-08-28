/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 15:17:04 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/28 17:17:46 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>
class Animal
{
    protected:
        std::string type;
    public:
        Animal(/* args */);
        Animal(const Animal& other);
		Animal& operator=(const Animal& other);
        virtual ~Animal();
        virtual void makeSound() const;
        
        const std::string& getType(void) const;
};



#endif