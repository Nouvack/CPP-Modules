/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 15:12:51 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/28 18:26:08 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
int main()
{
    std::cout << "ANIMAL" << std::endl;
    std::cout << "--------------------------" << std::endl;
    

    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << std::endl;

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); 
    j->makeSound();
    
    delete j;
    delete i;
}