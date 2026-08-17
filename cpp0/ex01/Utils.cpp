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
    bool hasAlpha = false;
	std::size_t i = 0;
    while (isspace(text[i]))
		i++;
	if (i >= text.length())
		return false;
    for(size_t k = 0; k < text.length(); k++)
    {
        if (isalpha(text[i]))
			hasAlpha = true;
		else if (!isspace(text[i]) && text[i] != '-')
			return (false);
    }
    return (hasAlpha);
} 

bool isValidPhone(std::string text)
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


bool isValidNum(std::string text, int totalC)
{
    if(text.length() != 1)
        return(false);
    for(size_t k = 0; k < text.length(); k++)
    {
    
        if (!std::isdigit(text[k]) || text[k] - '0' > totalC ) {
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


std::string inputIndex(std::string text, int totalC)
{
    std::string input;
    
    while(true)
    {
        std::cout << text;
        
        if (!std::getline(std::cin, input)) {
            return(""); 
        }
        else if (input.empty()) {
            std::cout << "Error: This field cannot be empty." << std::endl;
        }
        else if (!isValidNum(input, totalC)) {
            std::cout << "Error: Invalid input" << std::endl;
        }
        else if (input == "EXIT") {
            break; 
        }
        else{
            break;
        }
        
    }
    return (input);
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
        else if (!isValidPhone(input)) {
            std::cout << "Error: Invalid input" << std::endl;
        }
        else{
            break;
        }
        
    }
    return(input);
}

std::string formatField(const std::string &str) 
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}