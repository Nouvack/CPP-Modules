/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsantand <nsantand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 15:16:03 by nsantand          #+#    #+#             */
/*   Updated: 2026/08/25 15:16:03 by nsantand         ###   ########.fr       */
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

bool Fixed::operator<(const Fixed& other) const
{
    return(this->_rawBits < other._rawBits);
}

bool Fixed::operator>(const Fixed& other)const
{
    return(this->_rawBits > other._rawBits);
}

bool Fixed::operator<=(const Fixed& other)const
{
    return(this->_rawBits <= other._rawBits);
}

bool Fixed::operator>=(const Fixed& other)const
{
    return(this->_rawBits >= other._rawBits);
}

bool Fixed::operator==(const Fixed& other)const
{
    return(this->_rawBits == other._rawBits);
}

bool Fixed::operator!=(const Fixed& other)const
{
    return(this->_rawBits != other._rawBits);
}

Fixed Fixed::operator+(const Fixed& other) const
{
    Fixed res;

    res.setRawBits(this->_rawBits + other._rawBits);
    return(res);
}

Fixed Fixed::operator-(const Fixed& other) const
{
    Fixed res;

    res.setRawBits(this->_rawBits - other._rawBits);
    return(res);
}

Fixed Fixed::operator*(const Fixed& other) const
{
    Fixed res;
    long long num;

    num = static_cast<long long>(this->_rawBits) * static_cast<long long>(other._rawBits);
    res.setRawBits(static_cast<int>(num >> _fractionalBits));
    return(res);
}

Fixed Fixed::operator/(const Fixed& other) const
{
    Fixed res;
    long long num;

    num = static_cast<long long>(this->_rawBits) <<_fractionalBits;
    res.setRawBits(static_cast<int>(num / static_cast<long long>(other._rawBits)));
    return(res);
}
Fixed& Fixed::operator++()
{
    this->_rawBits++;
    return(*this);
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    ++(*this);
    return(temp);
}

Fixed& Fixed::operator--()
{
    this->_rawBits--;
    return(*this);
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    --(*this);
    return(temp);
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


Fixed&		Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed const&	Fixed::min(Fixed const& a, Fixed const& b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed&		Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed const&	Fixed::max(Fixed const& a, Fixed const& b)
{
	if (a > b)
		return (a);
	return (b);
}