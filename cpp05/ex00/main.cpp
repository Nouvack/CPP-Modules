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
    {
        try
        {
            std::cout << "VALID BUREAUCRAT" << std::endl;

            Bureaucrat diy("diy", 10);
    
            std::cout << diy << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    std::cout << std::endl;
    {
        try
        {
            std::cout << "INVALID BUREAUCRAT" << std::endl;
            Bureaucrat diy("diy", 0);
    
            std::cout << diy << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    std::cout << std::endl;
    {
        try
        {
            std::cout << "INVALID INCREMENT" << std::endl;
            Bureaucrat diy("diy", 1);
    
            diy.increment();
            std::cout << diy << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
    std::cout << std::endl;
    {
        try
        {
            std::cout << "VALID INCREMENT" << std::endl;
            Bureaucrat diy("diy", 2);
    
            diy.increment();
            std::cout << diy << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
    return 0;
}
