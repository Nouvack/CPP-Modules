/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 15:17:04 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/28 17:22:57 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
#include <iostream>
class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal(/* args */);
        WrongAnimal(const WrongAnimal& other);
		WrongAnimal& operator=(const WrongAnimal& other);
        ~WrongAnimal();
        void makeSound() const;
        
        const std::string& getType(void) const;
};



#endif