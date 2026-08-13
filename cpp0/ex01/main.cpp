/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 15:52:56 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/13 15:52:18 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"


int main(int argc, char **argv) {
    (void)argv;
    std::string comando;

    if(argc != 1){
        std::cout << "Error: This program does not take any arguments." << std::endl;
        return(1);
    }
    
    std::cout << "Welcome to the Awesome Phonebook, ";
    while (true) {
        std::cout << "Please enter your command (ADD, SEARCH, EXIT):";

        if (!std::getline(std::cin, comando)) {
            std::cout << "\nEXIT" << std::endl;
            break; 
        }
        if (comando.empty()) {
            continue; 
        }
        if (comando == "ADD") {
            break;
        }
        if (comando == "EXIT") {
            break;
        }
        if (comando == "EXIT") {
            std::cout << "\nEXIT" << std::endl;
            break; 
        }
    }
    return 0;
}