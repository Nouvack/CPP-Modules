/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 16:57:02 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/28 18:12:14 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
Dog::Dog(/* args */)
{
    std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
	_brain = new Brain();
    
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}
Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	_brain = new Brain(*other._brain);
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	return (*this);
}
void Dog::makeSound() const
{
    std::cout << type <<": Woofffffffff" << std::endl;
}

std::string	Dog::getIdeaDog(size_t index) const
{
	if (!_brain)
		return (std::string());
	return (_brain->getIdea(index));
}

void	Dog::setIdeaDog(size_t index, const std::string& idea)
{
	if (!_brain)
		return ;
	if (index >= 100)
		return ;
	_brain->setIdea(index, idea);
}

Brain* Dog::getBrain() const
{
	return (_brain);
}