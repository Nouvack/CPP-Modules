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
#include "Bureaucrat.hpp"

Form::Form() : _name("Default"), _isSigned(false), _signGrade(150), _executeGrade(150)
{
    std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const std::string& name,const int& signGrade, const int& executeGrade): _name(name), _isSigned(false), _signGrade(signGrade), _executeGrade(executeGrade)
{

    if(_signGrade < 1 || _executeGrade < 1 )
    {
        throw Form::GradeTooHighException();
    }
    if(signGrade > 150 || _executeGrade > 150)
    {
        throw Form::GradeTooLowException();
    }
    std::cout << "Form constructor for " << _name << " called" << std::endl;
    
}

Form::~Form()
{
    std::cout << "Form destructor for " << _name << " called" << std::endl;
}


Form::Form(const Form& other) : _name(other._name), _isSigned(other._isSigned), _signGrade(other._signGrade), _executeGrade(other._executeGrade)
{
    std::cout << "Form copy constructor called" << std::endl;
}

Form& Form::operator=(const Form& other)
{
    std::cout << "Form copy assignment operator called" << std::endl;
    
    if (this != &other)
    {
        this->_isSigned = other._isSigned; 
    }
    return (*this);
}
const std::string& Form::getName() const
{
    return(_name);
}

const bool& Form::getSigned() const
{
    return(_isSigned);
}

const int& Form::getSignGrade() const
{
    return(_signGrade);
}

const int& Form::getExecuteGrade() const
{
    return(_executeGrade);
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Error: Grade too high";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Error: Grade too low";
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() >_signGrade) {
        throw Form::GradeTooLowException();
    }
    _isSigned = true;
}

std::ostream& operator<<(std::ostream& out, const Form& form)
{
    out << "Form called " << form.getName() 
        << ", signed status: " << (form.getSigned() ? "True" : "False") 
        << ", grade required to sign: " << form.getSignGrade() 
        << ", grade required to execute: " << form.getExecuteGrade() << ".";
    
    return out;
}