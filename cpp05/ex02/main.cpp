/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 18:59:54 by nsantand          #+#    #+#             */
/*   Updated: 2026/09/08 18:04:27 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
int main()
{
    srand(time(NULL));
    {
        try
        {
            std::cout << "FIRST TEST" << std::endl;
            std::cout << "---------------------------------------------------" << std::endl;
            PresidentialPardonForm prueba("Invalid");
            Bureaucrat hello("home", 26);
            
            hello.signForm(prueba);
            hello.executeForm(prueba);

            std::cout << hello << std::endl;
            std::cout << "---------------------------------------------------" << std::endl;

        }
        catch(const std::exception& e)
        {
            std::cerr << "This is the error: " << e.what() << std::endl;
        }
    }
    {
        try
        {
            std::cout << "SECOND TEST" << std::endl;
            std::cout << "---------------------------------------------------" << std::endl;
            RobotomyRequestForm prueba("Invalid");
            Bureaucrat hello("home", 26);
            
            hello.signForm(prueba);
            hello.executeForm(prueba);

            std::cout << hello << std::endl;
            std::cout << "---------------------------------------------------" << std::endl;

        }
        catch(const std::exception& e)
        {
            std::cerr << "This is the error: " << e.what() << std::endl;
        }
    }
    {
        try
        {
            std::cout << "THIRD TEST" << std::endl;
            std::cout << "---------------------------------------------------" << std::endl;
            ShrubberyCreationForm prueba("Invalid");
            Bureaucrat hello("home", 26);
            
            hello.signForm(prueba);
            hello.executeForm(prueba);

            std::cout << hello << std::endl;
            std::cout << "---------------------------------------------------" << std::endl;

        }
        catch(const std::exception& e)
        {
            std::cerr << "This is the error: " << e.what() << std::endl;
        }
    }
    return 0;
}
