/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 17:37:11 by nsantand          #+#    #+#             */
/*   Updated: 2026/11/10 17:47:12 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char const **argv)
{
    if(argc != 2)
    {
        return(1);
    }
    ScalarConverter::convert(argv[1]);
    return (0);
}
