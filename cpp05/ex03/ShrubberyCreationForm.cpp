/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 17:16:28 by nsantand          #+#    #+#             */
/*   Updated: 2026/10/21 20:09:09 by nsantand         ###   ########.fr       */
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
    std::ofstream archive((_target + "_shrubbery").c_str());

    if (!archive.is_open())
    {
        throw std::runtime_error("Error: No se pudo crear el archivo " + _target + "_shrubbery");
    }

    archive << "       ###\n";
    archive << "      #o###\n";
    archive << "    #####o###\n";
    archive << "   #o#\\#|#/###\n";
    archive << "    ###\\|/#o#\n";
    archive << "     # }|{  #\n";
    archive << "       }|{" << std::endl;

    archive.close();
}
      

std::ostream& operator<<(std::ostream& out, const ShrubberyCreationForm& ShrubberyCreationForm)
{
    out << " ShrubberyCreationForm called " << ShrubberyCreationForm.getName() 
        << ", signed status: " << (ShrubberyCreationForm.getSigned() ? "True" : "False") 
        << ", grade required to sign: " << ShrubberyCreationForm.getSignGrade() 
        << ", grade required to execute: " << ShrubberyCreationForm.getExecuteGrade() << ".";
    
    return out;
}
