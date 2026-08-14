/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 16:23:35 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/14 17:08:35 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"
bool isValidText(std::string text)
{
    for(size_t k = 0; k < text.length(); k++)
    {
        if (!std::isalpha(text[k])) {
            return (false);
        }
    }
    return (true);
} 

bool isValidNum(std::string text)
{
    if(text.length() != 9)
        return(false);
    for(size_t k = 0; k < text.length(); k++)
    {
        if (!std::isdigit(text[k])) {
            return (false);
        }
    }
    return (true);
} 

std::string inputText(std::string text)
{
    std::string input;
    
    while(true)
    {
        std::cout << text;
        
        if (!std::getline(std::cin, input)) {
            std::cout << "\nEXIT" << std::endl;
            break; 
        }
        else if (input.empty()) {
            std::cout << "Error: This field cannot be empty." << std::endl;
        }
        else if (!isValidText(input)) {
            std::cout << "Error: Invalid input" << std::endl;
        }
        else{
            break;
        }
        
    }
    return(input);
}


std::string inputNum(std::string num)
{
    std::string input;
    
    
    while(true)
    {
        std::cout << num;
        
        if (!std::getline(std::cin, input)) {
            std::cout << "\nEXIT" << std::endl;
            break; 
        }
        else if (input.empty()) {
            std::cout << "Error: This field cannot be empty." << std::endl;
        }
        else if (!isValidNum(input)) {
            std::cout << "Error: Invalid input" << std::endl;
        }
        else{
            break;
        }
        
    }
    return(input);
}