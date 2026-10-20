/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 17:16:28 by nsantand          #+#    #+#             */
/*   Updated: 2026/10/20 18:16:51 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default", 145, 137), _target("Default")
{
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target): AForm(target + "ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "ShrubberyCreationForm constructor for " << getName() << " called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor for " << getName() << " called" << std::endl;
}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other), _target(other._target)
{
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
    
    if (this != &other)
    {
        AForm::operator=(other);
        _target = other._target; 
    }
    return (*this);
}

void ShrubberyCreationForm::executeActivate() const
{
    std::ofstream archive(_target + "_shrubbery");
    if(archive.is_open())//cambiar a un trycatch, terminar y probar essta implementacion y ya estaria terminado este ejercicio
    {
        archive << "       ###";
        archive << "      #o###";
        archive << "    #####o###";
        archive << "   #o#\#|#/###";
        archive << "    ###\|/#o#";
        archive << "     # }|{  #";
        archive << "       }|{" << std::endl;
        archive.close();
    }
}
      

std::ostream& operator<<(std::ostream& out, const ShrubberyCreationForm& ShrubberyCreationForm)
{
    out << " ShrubberyCreationForm called " << ShrubberyCreationForm.getName() 
        << ", signed status: " << (ShrubberyCreationForm.getSigned() ? "True" : "False") 
        << ", grade required to sign: " << ShrubberyCreationForm.getSignGrade() 
        << ", grade required to execute: " << ShrubberyCreationForm.getExecuteGrade() << ".";
    
    return out;
}
