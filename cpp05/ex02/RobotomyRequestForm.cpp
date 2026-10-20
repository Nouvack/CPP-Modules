/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 17:16:28 by nsantand          #+#    #+#             */
/*   Updated: 2026/10/20 17:23:48 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Default", 72, 45), _target("Default")
{
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target): AForm(target + "RobotomyRequestForm", 72, 45), _target(target)
{
    std::cout << "RobotomyRequestForm constructor for " << getName() << " called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor for " << getName() << " called" << std::endl;
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other), _target(other._target)
{
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
    
    if (this != &other)
    {
        AForm::operator=(other);
        _target = other._target; 
    }
    return (*this);
}

void RobotomyRequestForm::executeActivate() const
{
    std::cout << "*Some drilling noises*" << std::endl;

    if (std::rand() % 2 == 0)
    {
        std::cout << _target <<" has been robotomized successfully" << std::endl;
    }
    else
    {
        std::cout << "the robotomy failed" << std::endl;
    }
}

std::ostream& operator<<(std::ostream& out, const RobotomyRequestForm& RobotomyRequestForm)
{
    out << " RobotomyRequestForm called " << RobotomyRequestForm.getName() 
        << ", signed status: " << (RobotomyRequestForm.getSigned() ? "True" : "False") 
        << ", grade required to sign: " << RobotomyRequestForm.getSignGrade() 
        << ", grade required to execute: " << RobotomyRequestForm.getExecuteGrade() << ".";
    
    return out;
}
