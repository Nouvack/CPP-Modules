/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 15:18:32 by nsantand          #+#    #+#             */
/*   Updated: 2026/11/02 10:51:02 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern default constructor called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern destructor for called" << std::endl;
}

Intern::Intern(const Intern& other)
{
    std::cout << "Intern copy constructor called" << std::endl;
    (void)other;
}

Intern& Intern::operator=(const Intern& other)
{
    (void)other;
    std::cout << "Intern copy assignment operator called" << std::endl;
	return (*this);
}

struct FormInput
{
    std::string name;
    AForm   *(*create)(std::string const &);
};

static AForm *createShrubbery(std::string const & target)
{
    return new ShrubberyCreationForm(target);
}

static AForm *createRobotomy(std::string const & target)
{
    return new RobotomyRequestForm(target);
}

static AForm *createPardon(std::string const & target)
{
    return new PresidentialPardonForm(target);
}
const char* Intern::FormNotFound::what() const throw() {
    return "Error: Couldn't found the form.";
}

AForm *Intern::makeForm(std::string const &formName, std::string const & target) const
{
    FormInput forms[] = {
        {"shrubbery creation", createShrubbery},
        {"robotomy request",   createRobotomy},
        {"presidential pardon", createPardon}
    };

    for(int i = 0; i < 3; i++)
    {
        if(forms[i].name == formName)
        {
            std::cout << "Intern creates " << formName << std::endl;
            return forms[i].create(target);
        }
    }
    throw Intern::FormNotFound();
    

}