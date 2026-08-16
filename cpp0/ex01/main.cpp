/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 15:52:56 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/14 16:44:32 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int argc, char **argv) {
    (void)argv;
    std::string comand;
    PhoneBook book;

    if(argc != 1){
        std::cout << "Error: This program does not take any arguments." << std::endl;
        return(1);
    }
    std::cout << "Welcome to the Awesome Phonebook, ";
    while (true) {
        std::cout << "Please enter your command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, comand)) {
            std::cout << "\nEXIT" << std::endl;
            break; 
        }
        else if (comand.empty()) {
            continue; 
        }
        else if (comand == "ADD") {
            book.addContact(book.newContact());
        }
        else if (comand == "SEARCH") {
            book.printContacts();
        }
        else if (comand == "EXIT") {
            std::cout << "EXIT" << std::endl;
            break; 
        }
    }
    return (0);
}