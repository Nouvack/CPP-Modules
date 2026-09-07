/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 18:19:45 by nsantand          #+#    #+#             */
/*   Updated: 2026/09/07 18:58:29 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() :_name("Default")
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, const size_t& grade): _name(name), _grade(grade)
{
    if(_grade < 1 )
    {
        throw Bureaucrat::GradeTooLowException();
    }
    if(_grade > 150)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    std::cout << "Bureaucrat constructor for " << _name << " called" << std::endl;
    
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor for " << _name << " called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other):_name(other._name)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_grade = other.getGrade();
	}
	return (*this);
}

const size_t& Bureaucrat::getGrade() const
{
    return(_grade);
}

const std::string& Bureaucrat::getName() const
{
    return(_name);
}


void Bureaucrat::increment()
{
    if(_grade < 1 )
    {
        throw Bureaucrat::GradeTooLowException();
    }
    _grade--;
}

void Bureaucrat::decrement()
{
    if(_grade > 150)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    _grade--;
}