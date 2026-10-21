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
            std::cout << "FIRST TEST: Invalid Form\n" << std::endl;
            std::cout << "---------------------------------------------------" << std::endl;
            PresidentialPardonForm prueba("Invalid");
            RobotomyRequestForm robot("ROBO");
            ShrubberyCreationForm shu("shipibo");

            Bureaucrat hello("home", 26);
            std::cout << "---------------------------------------------------" << std::endl;
            
            hello.signForm(shu);
            hello.executeForm(shu);
            std::cout << "---------------------------------------------------" << std::endl;

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
