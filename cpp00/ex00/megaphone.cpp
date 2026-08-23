/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 12:51:02 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/20 12:05:03 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <bits/stdc++.h>
int main(int argc, char  **argv)
{
    std::string msg;

    
    if(argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return(0);
    }
    for(int i = 1; i < argc; i++)
    {
        msg = argv[i];
        for(size_t j = 0; j < msg.length(); j++)
            std::cout << static_cast<char>(std::toupper(static_cast<unsigned char>(msg[j])));
    }
    std::cout << std::endl;
    return(0);
}