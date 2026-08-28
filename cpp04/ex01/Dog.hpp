/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 16:49:34 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/28 18:12:50 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* _brain;
    public:
        Dog(/* args */);
        Dog(const Dog& other);
		Dog& operator=(const Dog& other);
        ~Dog();
        
        void makeSound() const;
        std::string		getIdeaDog(size_t index) const;
		void			setIdeaDog(size_t index, const std::string& idea);
		Brain*			getBrain() const;
};


#endif