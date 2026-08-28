/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 15:40:37 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/28 18:10:40 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
    private:
        Brain* _brain;
    public:
        Cat(/* args */);
        Cat(const Cat& other);
		Cat& operator=(const Cat& other);
        ~Cat();
        
        void makeSound() const;
        std::string		getIdeaCat(size_t index) const;
		void			setIdeaCat(size_t index, const std::string& idea);
		Brain*			getBrain() const;
};


#endif