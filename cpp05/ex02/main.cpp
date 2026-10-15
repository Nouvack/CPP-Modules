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
int main()
{
    try
    {
        std::cout << "FIRST TEST: Invalid Form\n" << std::endl;
        PresidentialPardonForm prueba("Invalid");
        Bureaucrat hello;

        prueba.
    }
    catch(const std::exception& e)
    {
        std::cerr << "This is the error: " << e.what() << std::endl;
    }
    std::cout << "---------------------------------------------------" << std::endl;
    
    return 0;
}
