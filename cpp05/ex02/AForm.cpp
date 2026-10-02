/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 18:06:15 by nsantand          #+#    #+#             */
/*   Updated: 2026/09/09 15:37:09 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("Default"), _isSigned(false), _signGrade(150), _executeGrade(150)
{
    std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(const std::string& name,const int& signGrade, const int& executeGrade): _name(name), _isSigned(false), _signGrade(signGrade), _executeGrade(executeGrade)
{

    if(_signGrade < 1 || _executeGrade < 1 )
    {
        throw AForm::GradeTooHighException();
    }
    if(signGrade > 150 || _executeGrade > 150)
    {
        throw AForm::GradeTooLowException();
    }
    std::cout << "AForm constructor for " << _name << " called" << std::endl;
    
}

AForm::~AForm()
{
    std::cout << "AForm destructor for " << _name << " called" << std::endl;
}


AForm::AForm(const AForm& other) : _name(other._name), _isSigned(other._isSigned), _signGrade(other._signGrade), _executeGrade(other._executeGrade)
{
    std::cout << "AForm copy constructor called" << std::endl;
}

AForm& AForm::operator=(const AForm& other)
{
    std::cout << "AForm copy assignment operator called" << std::endl;
    
    if (this != &other)
    {
        this->_isSigned = other._isSigned; 
    }
    return (*this);
}
const std::string& AForm::getName() const
{
    return(_name);
}

const bool& AForm::getSigned() const
{
    return(_isSigned);
}

const int& AForm::getSignGrade() const
{
    return(_signGrade);
}

const int& AForm::getExecuteGrade() const
{
    return(_executeGrade);
}

const char* AForm::GradeTooHighException::what() const throw() {
    return "Error: Grade too high";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "Error: Grade too low";
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() >_signGrade) {
        throw AForm::GradeTooLowException();
    }
    _isSigned = true;
}

std::ostream& operator<<(std::ostream& out, const AForm& AForm)
{
    out << "AForm called " << AForm.getName() 
        << ", signed status: " << (AForm.getSigned() ? "True" : "False") 
        << ", grade required to sign: " << AForm.getSignGrade() 
        << ", grade required to execute: " << AForm.getExecuteGrade() << ".";
    
    return out;
}