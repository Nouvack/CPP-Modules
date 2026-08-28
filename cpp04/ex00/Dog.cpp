/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 16:57:02 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/28 17:11:29 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
Dog::Dog(/* args */)
{
    std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
    
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}
Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
	}
	return (*this);
}
void Dog::makeSound() const
{
    std::cout << type <<": Woofffffffff" << std::endl;
}