/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 18:16:58 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/21 18:29:45 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
class Harl
{
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    
public:
    Harl(/* args */);
    void complain(const std::string&);
};



#endif