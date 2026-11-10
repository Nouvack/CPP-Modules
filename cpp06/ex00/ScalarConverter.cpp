/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 16:12:53 by nsantand          #+#    #+#             */
/*   Updated: 2026/11/10 18:06:47 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() 
{
    std::cout << "ScalarConverter default constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter destructor for default called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
	std::cout << "ScalarConverter copy constructor called" << std::endl;
    (void)other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
    std::cout << "ScalarConverter copy assignment operator called" << std::endl;
	(void)other;
	return (*this);
}


static bool isChar(const std::string& literal)
{
    if (literal.length() == 1 && !std::isdigit(literal[0]) && std::isprint(literal[0])) {
        return true;
    }
    return false;
}
static void printEveryting(const std::string& literal)
{
    if(isChar(literal))
    {
        std::cout << "IS CHAR" << std::endl;
    }
    
}

void ScalarConverter::convert(const std::string& literal)
{
    printEveryting(literal);
}