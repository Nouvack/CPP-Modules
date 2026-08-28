/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 17:49:20 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/28 18:09:25 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(/* args */)
{
    for (size_t i = 0; i < 100; ++i)
		_ideas[i] = "Empty idea";
    std::cout << "Brain default constructor called" << std::endl;

}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}
Brain::Brain(const Brain& other) 
{
	std::cout << "Brain copy constructor called" << std::endl;
    for (size_t i = 0; i < 100; ++i)
		_ideas[i] = other._ideas[i];
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &other)
	{
		for (size_t i = 0; i < 100; ++i)
			_ideas[i] = other._ideas[i];
	}
	return (*this);
}

std::string Brain::getIdea(int index) const
{
    if (index >= 100)
		return (std::string());
	return (this->_ideas[index]);
}

void	Brain::setIdea(size_t index, const std::string& idea)
{
	if (index >= 100)
		return ;

	_ideas[index] = idea;
}