/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 13:35:27 by nsantand          #+#    #+#             */
/*   Updated: 2026/11/02 10:31:59 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"


class Intern
{
    public:
        Intern();
        Intern(Intern const & src);
        Intern & operator=(Intern const & src);
        ~Intern();
        class FormNotFound : public std::exception {
        public:
            virtual const char* what() const throw();
        };

        AForm   *makeForm(std::string const & formName, std::string const & target) const;
};



#endif