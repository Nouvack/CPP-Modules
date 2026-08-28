/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 17:38:36 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/28 18:09:23 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
class Brain
{
    private:
        std::string _ideas[100];
    public:
        Brain(/* args */);
        ~Brain();
        Brain(const Brain& other);
		Brain& operator=(const Brain& other);
        std::string getIdea(int index) const;
        void setIdea(size_t index, const std::string& idea);

};



#endif