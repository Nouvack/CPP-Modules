/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 17:16:26 by nsantand          #+#    #+#             */
/*   Updated: 2026/10/20 18:02:50 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"
#include <cstdlib>
class RobotomyRequestForm : public AForm
{
    private:
        std::string _target;
    public:
        RobotomyRequestForm (/* args */);
        RobotomyRequestForm (const std::string&);
        RobotomyRequestForm (const RobotomyRequestForm& other);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
        ~RobotomyRequestForm ();
        
    protected:
        void executeActivate() const;
};


#endif