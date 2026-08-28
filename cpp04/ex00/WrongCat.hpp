/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 15:40:37 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/28 17:31:41 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
#include <iostream>
#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
    private:
        /* data */
    public:
        WrongCat(/* args */);
        WrongCat(const WrongCat& other);
		WrongCat& operator=(const WrongCat& other);
        ~WrongCat();
        
        void makeSound() const;
        
};


#endif