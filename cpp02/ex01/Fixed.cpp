/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 15:16:12 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/25 15:16:12 by nsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed(): _rawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int nbr)
{
    std::cout << "Int constructor called" << std::endl;
    _rawBits = nbr << _fractionalBits;
}

Fixed::Fixed(const float nbr)
{
    std::cout << "Float constructor called" << std::endl;
    _rawBits = roundf(nbr * (1 << _fractionalBits));
}
int Fixed::toInt(void) const
{
    return(_rawBits >> _fractionalBits);
}

float Fixed::toFloat(void) const
{
    return((float)_rawBits / (float)(1 << _fractionalBits));
}
std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return out;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other): _rawBits(other._rawBits)
{
	std::cout << "Copy constructor called" << std::endl;
}
Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_rawBits = other._rawBits;
	}
	return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(_rawBits);
}

void Fixed::setRawBits(int const raw)
{
    _rawBits = raw;
}