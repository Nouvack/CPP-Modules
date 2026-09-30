/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 18:06:13 by nsantand          #+#    #+#             */
/*   Updated: 2026/09/09 15:43:13 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
#include <iostream>

class Bureaucrat;
class AForm
{
    private:
        const std::string _name;
        bool _isSigned;
        const int _signGrade;
        const int _executeGrade;
        
    public:
        AForm(/* args */);
        AForm(const std::string&,const int&, const int&);
        AForm(const AForm& other);
        AForm& operator=(const AForm& other);
        virtual ~AForm();
        
        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
            };

        class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw();
        };
        
        const std::string& getName() const;
        const bool& getSigned() const;
        const int& getExecuteGrade() const;
        const int& getSignGrade() const;
        void beSigned(const Bureaucrat&);
    protected:
        virtual void execute(Bureaucrat const & executor) = 0;
};

std::ostream& operator<<(std::ostream& out, const AForm& AForm);


#endif