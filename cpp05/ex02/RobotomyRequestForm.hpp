/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 17:16:26 by nsantand          #+#    #+#             */
/*   Updated: 2026/09/30 18:37:28 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        const std::string _target;
    public:
        RobotomyRequestForm (/* args */);
        RobotomyRequestForm (const std::string&);
        RobotomyRequestForm (const RobotomyRequestForm & other);
        RobotomyRequestForm & operator=(const RobotomyRequestForm & other);
        ~RobotomyRequestForm ();
        
        
    protected:
        void execute(Bureaucrat const & executor) ;
};


#endif