/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 12:51:02 by nsantand          #+#    #+#             */
/*   Updated: 2026/07/17 12:26:18 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char  **argv)
{
    char *line = NULL;
    
    if(argc == 1)
    {
        return(std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
    }
    for(int i = 1; i < argc; i++)
    {
        for(int j = 0; argv[i][j]; j++)
        {
            std::cout << static_cast<char>(std::toupper(static_cast<unsigned char>(argv[i][j])));
        }
    }
    std::cout << line << std::endl;
    return(0);
}