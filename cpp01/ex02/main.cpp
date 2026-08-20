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
int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Original Variable" << std::endl;
    std::cout << str << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "A pointer to the Variable" << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "A reference to the Variable" << std::endl;
    std::cout << stringREF << std::endl;
    

    return 0;
}
