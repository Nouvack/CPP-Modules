/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 15:40:34 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/28 18:11:33 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
Cat::Cat(/* args */)
{
    std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
	_brain = new Brain();
	
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
	delete _brain;
	
}
Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	_brain = new Brain(*other._brain);
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	return (*this);
}
void Cat::makeSound() const
{
    std::cout << type <<": Meowwwwww" << std::endl;
}


std::string	Cat::getIdeaCat(size_t index) const
{
	if (!_brain)
		return (std::string());
	return (_brain->getIdea(index));
}

void	Cat::setIdeaCat(size_t index, const std::string& idea)
{
	if (!_brain)
		return ;
	if (index >= 100)
		return ;
	_brain->setIdea(index, idea);
}

Brain* Cat::getBrain() const
{
	return (_brain);
}