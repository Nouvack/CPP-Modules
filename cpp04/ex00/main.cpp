/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 15:12:51 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/28 18:25:10 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
int main()
{
    std::cout << "ANIMAL" << std::endl;
    std::cout << "--------------------------" << std::endl;
    
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << std::endl;

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); 
    j->makeSound();
    meta->makeSound();
    
    delete meta;
    delete j;
    delete i;

    std::cout << "\nWRONGANIMAL" << std::endl;
    
    std::cout << "--------------------------" << std::endl;

    
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongI = new WrongCat();
    
    std::cout << std::endl;

    std::cout << wrongI->getType() << " " << std::endl;
    wrongI->makeSound();
    wrongMeta->makeSound();
    
    delete wrongMeta;
    delete wrongI;
    return 0;
}