/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 18:06:13 by nsantand          #+#    #+#             */
/*   Updated: 2026/09/09 15:43:13 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
#include <iostream>
class Form
{
private:
    const std::string _name;
    bool isSigned;
    const size_t signGrade;
    const size_t executeGrade;
    
public:
    Form(/* args */);
    Form(const std::string&, const bool&, const size_t&, const size_t&);
    Form(const Form& other);
    Form& operator=(const Form& other);
    ~Form();
    
    class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw();
        };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    
    const std::string& Form::getName() const;
    const std::string& Form::getName() const;
    
};



#endif