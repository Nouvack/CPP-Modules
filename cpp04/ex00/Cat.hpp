/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 15:40:37 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/28 17:06:29 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include <iostream>
#include "Animal.hpp"
class Cat : public Animal
{
    private:
        /* data */
    public:
        Cat(/* args */);
        Cat(const Cat& other);
		Cat& operator=(const Cat& other);
        ~Cat();
        
        void makeSound() const;
        
};


#endif