/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:09:27 by inshin            #+#    #+#             */
/*   Updated: 2022/01/25 04:35:00 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed(0) {}

Fixed::Fixed(const int val)
{
	_fixed = (val << _bit);
}

Fixed::Fixed(const float val)
{
	_fixed = roundf(val * (1<<_bit));
}

Fixed::Fixed(const Fixed &f)
{
	*this = f;
}

Fixed::~Fixed(void) {}

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

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
	os << f.toFloat();
	return os;
}

Fixed& Fixed::operator=(const Fixed& f)
{
	_fixed = f.getRawBits();
	return *this;
}

bool Fixed::operator>(const Fixed& f)
{
	return _fixed > f.getRawBits();
}

bool Fixed::operator<(const Fixed& f)
{
	return _fixed < f.getRawBits();
}

bool Fixed::operator>=(const Fixed& f)
{
	return _fixed >= f.getRawBits();
}

bool Fixed::operator<=(const Fixed& f)
{
	return _fixed <= f.getRawBits();
}

bool Fixed::operator==(const Fixed& f)
{
	return _fixed == f.getRawBits();
}

bool Fixed::operator!=(const Fixed& f)
{
	return _fixed != f.getRawBits();
}

Fixed& Fixed::operator++(void)
{
	_fixed++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++*this;
	return temp;
}

Fixed& Fixed::operator--(void)
{
	_fixed--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--*this;
	return temp;
}

Fixed Fixed::operator+(const Fixed& f)
{
	Fixed temp(this->toFloat() + f.toFloat());
	return temp;
}

Fixed Fixed::operator-(const Fixed& f)
{
	Fixed temp(this->toFloat() - f.toFloat());
	return temp;
}

Fixed Fixed::operator*(const Fixed& f)
{
	Fixed temp(this->toFloat() * f.toFloat());
	return temp;
}

Fixed Fixed::operator/(const Fixed& f)
{
	Fixed temp(this->toFloat() / f.toFloat());
	return temp;
}


Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	else
		return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	else
		return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	else
		return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	else
		return b;
}

