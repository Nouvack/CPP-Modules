/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 13:35:27 by nsantand          #+#    #+#             */
/*   Updated: 2026/09/08 18:00:50 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>
class Bureaucrat
{
    private:
        const std::string _name;
        size_t _grade;
    public:
        Bureaucrat(/* args */);
        Bureaucrat(const std::string&, const size_t&);
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat& operator=(const Bureaucrat& other);
        ~Bureaucrat();
        
        
        const std::string& getName() const;
        const size_t& getGrade() const;
        
        void increment();
        void decrement();
        
        class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw();
        };
        

        
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

#endif