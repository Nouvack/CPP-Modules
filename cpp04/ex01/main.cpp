/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 15:12:51 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/28 18:22:53 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
int main()
{
    std::cout << "--- CREATING DOG A ---" << std::endl;
    Dog dogA;
    dogA.setIdeaDog(0, "I want a bone");

    std::cout << "\n--- CLONING DOG B ---" << std::endl;
    Dog dogB = dogA; // Calls the deep copy constructor

    std::cout << "\n--- ALTERING THE CLONE ---" << std::endl;
    dogB.setIdeaDog(0, "I want to destroy the sofa");

    std::cout << "\n--- THE FINAL TEST ---" << std::endl;
    std::cout << "Dog A's idea: " << dogA.getIdeaDog(0) << std::endl;
    std::cout << "Dog B's idea: " << dogB.getIdeaDog(0) << std::endl;

    std::cout << "\n--- DESTRUCTION ---" << std::endl;

    std::cout << "\nSECOND TEST" <<std::endl;

    const int numAnimals = 100; 
    Animal* animals[numAnimals];

    std::cout << "--- CREATING ANIMALS (ARRAY) ---" << std::endl;
    for (int i = 0; i < numAnimals; i++)
    {
        if (i % 2 == 0)
        {
            std::cout << "Creating Dog " << i << ":" << std::endl;
            animals[i] = new Dog();
        }
        else
        {
            std::cout << "Creating Cat " << i << ":" << std::endl;
            animals[i] = new Cat();
        }
    }

    std::cout << "\n--- TESTING POLYMORPHISM ---" << std::endl;
    for (int i = 0; i < numAnimals; i++)
    {
        animals[i]->makeSound(); 
    }

    std::cout << "\n--- DESTROYING ANIMALS (ARRAY) ---" << std::endl;
    for (int i = 0; i < numAnimals; i++)
    {
        delete animals[i]; 
    }

    return 0;
}