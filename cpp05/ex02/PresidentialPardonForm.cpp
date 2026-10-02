/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 17:16:31 by nsantand          #+#    #+#             */
/*   Updated: 2026/10/02 18:55:06 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Default",25, 5), _target("Default")
{
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target): AForm(target + "PresidentialPardonForm",25, 5), _target(target)
{

    std::cout << "PresidentialPardonForm constructor for " << getName() << " called" << std::endl;
    
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor for " << getName() << " called" << std::endl;
}


PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other), _target(other._target)
{
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;
    
    if (this != &other)
    {
        AForm::operator=(other);
        _target = other._target; 
    }
    return (*this);
}


std::ostream& operator<<(std::ostream& out, const PresidentialPardonForm& PresidentialPardonForm)
{
    out << "PresidentialPardonForm called " << PresidentialPardonForm.getName() 
        << ", signed status: " << (PresidentialPardonForm.getSigned() ? "True" : "False") 
        << ", grade required to sign: " << PresidentialPardonForm.getSignGrade() 
        << ", grade required to execute: " << PresidentialPardonForm.getExecuteGrade() << ".";
    
    return out;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
    
}