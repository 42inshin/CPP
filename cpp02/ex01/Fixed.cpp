/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:45:17 by inshin            #+#    #+#             */
/*   Updated: 2022/02/04 16:32:22 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	_fixed = (val << _bit);
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" << std::endl;
	_fixed = roundf(val * (1<<_bit));
}

Fixed::Fixed(const Fixed &origin)
{
	std::cout << "Copy constructor called" << std::endl;
	operator=(origin);
}

Fixed& Fixed::operator=(const Fixed& origin)
{
	std::cout << "Assignation operator called" << std::endl;
	_fixed = origin.getRawBits();
	return *this;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return _fixed;
}

void Fixed::setRawBits(int const raw)
{
	_fixed = raw;
}

float Fixed::toFloat( void ) const
{
	return static_cast<float>(_fixed) / (1<<_bit) ;
}

int Fixed::toInt( void ) const
{
	return _fixed >> _bit;
}

std::ostream& operator<<(std::ostream& os, const Fixed& val)
{
	os << val.toFloat();
	return os;
}
