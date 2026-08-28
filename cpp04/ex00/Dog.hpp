/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 16:49:34 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/28 17:06:24 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
    private:
        /* data */
    public:
        Dog(/* args */);
        Dog(const Dog& other);
		Dog& operator=(const Dog& other);
        ~Dog();
        
        void makeSound() const;
        
};


#endif