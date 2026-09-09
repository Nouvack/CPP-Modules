/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 18:06:15 by nsantand          #+#    #+#             */
/*   Updated: 2026/09/09 15:37:09 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Form.hpp"


Form::Form() :_name("Default")
{
    std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const std::string& name, const size_t& grade): _name(name), _grade(grade)
{
    if(_grade < 1 )
    {
        throw Form::GradeTooLowException();
    }
    if(_grade > 150)
    {
        throw Form::GradeTooHighException();
    }
    std::cout << "Form constructor for " << _name << " called" << std::endl;
    
}

Form::~Form()
{
    std::cout << "Form destructor for " << _name << " called" << std::endl;
}

Form::Form(const Form& other):_name(other._name)
{
	std::cout << "Form copy constructor called" << std::endl;
}

Form& Form::operator=(const Form& other)
{
    std::cout << "Form copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_grade = other.getGrade();
	}
	return (*this);
}

const size_t& Form::getGrade() const
{
    return(_grade);
}

const std::string& Form::getName() const
{
    return(_name);
}


void Form::increment()
{
    if(_grade < 1 )
    {
        throw Form::GradeTooLowException();
    }
    _grade--;
}

void Form::decrement()
{
    if(_grade > 150)
    {
        throw Form::GradeTooHighException();
    }
    _grade--;
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Error: Grade too high. (Valid Range: 1 - 150)";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Error: Grade too low. (Valid Range: 1 - 150)";
}

std::ostream& operator<<(std::ostream& out, const Form& Form)
{
    out << Form.getName() << ", Form grade " << Form.getGrade();
    return out;
}
