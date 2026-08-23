/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyReplace.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 18:34:43 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/21 18:25:08 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>
#include <string>

bool myReplace(const std::string& filename, const std::string& s1, const std::string& s2)
{
    if(filename.empty() || s1.empty())
    {
        std::cout << "Error: Invalid arguments" << std::endl;
        return false; 
    }   
    std::string newStr;
    std::string buff;
    std::string temp;
    size_t found;
    size_t pos = 0;
    
    std::ifstream inFile(filename.c_str()); 
    if (!inFile.is_open()) {
        std::cout << "Error: Couldn't open the file" << std::endl;
        return false; 
    }
    while (std::getline(inFile, temp)) {
        buff.append(temp);
        if (!inFile.eof()) {
            buff.append("\n");
        }
    }
    inFile.close();
    
    found  = buff.find(s1, pos);
    while (found != std::string::npos)  
    {
       newStr.append(buff.substr(pos, found -pos));
       newStr.append(s2);
       pos = found + s1.length();
       found = buff.find(s1,pos);
    }
    newStr.append(buff.substr(pos));
    
    std::string outFilename = filename + ".replace";
    std::ofstream outFile(outFilename.c_str());
    if (!outFile.is_open()) {
        std::cout << "Error: file can not be created " << outFilename << std::endl;
        return false;
    }
    outFile << newStr;
    outFile.close();
    return(true);
}
