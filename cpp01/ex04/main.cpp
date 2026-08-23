/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 18:34:29 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/21 17:56:57 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyReplace.hpp"


int main(int argc, char const **argv)
{
    if(argc != 4){
        std::cout << "Error: Invalid arguments" << std::endl;
        return(1);
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    
    if(!myReplace(filename, s1, s2)){
        return(1);
    }
    return 0;
}
