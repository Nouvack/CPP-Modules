/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 11:46:50 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/20 12:14:45 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    // --- BLOQUE 1: DIRECCIONES ---
    std::cout << "The memory address of the string variable: " << &str << std::endl;
    std::cout << "The memory address held by stringPTR:      " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF:      " << &stringREF << std::endl;
    
    std::cout << "---------------------------------------------------" << std::endl;
    
    // --- BLOQUE 2: VALORES ---
    std::cout << "The value of the string variable:  " << str << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;

    return 0;
}
