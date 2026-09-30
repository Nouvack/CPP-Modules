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

int main()
{
    try
    {
        std::cout << "FIRST TEST: Invalid Form\n" << std::endl;
        Form invalidForm("Invalid", 0 , 150);
    }
    catch(const std::exception& e)
    {
        std::cerr << "This is the error: " << e.what() << std::endl;
    }
    std::cout << "---------------------------------------------------" << std::endl;
    try
    {
        std::cout << "SECOND TEST: Invalid grade\n" << std::endl;
        Form form("Form", 1,1);
        Bureaucrat cadet("cadet", 150);

        std::cout << form << std::endl;
        std::cout << cadet << std::endl;

        cadet.signForm(form);
        std::cout << form << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << "This is the error: " << e.what() << std::endl;
    }
    
    std::cout << "---------------------------------------------------" << std::endl;
    try
    {
        std::cout << "THIRD TEST: Valid grade\n" << std::endl;
        Form form("Form", 1,1);
        Bureaucrat importandPerson("Importand person", 1);

        std::cout << form << std::endl;
        std::cout << importandPerson << std::endl;

        importandPerson.signForm(form);
        std::cout << form << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << "This is the error: " << e.what() << std::endl;
    }
    return 0;
}
