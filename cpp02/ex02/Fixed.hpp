/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:09:32 by inshin            #+#    #+#             */
/*   Updated: 2022/01/25 04:19:39 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>
#include <cmath>

class Fixed
{

private:
	int _fixed;
	static const int _bit = 8;

public:
	Fixed(void);
	Fixed(const int val);
	Fixed(const float val);
	Fixed(const Fixed& origin);
	Fixed& operator=(const Fixed& origin);
	bool operator>(const Fixed& origin);
	bool operator<(const Fixed& origin);
	bool operator>=(const Fixed& origin);
	bool operator<=(const Fixed& origin);
	bool operator==(const Fixed& origin);
	bool operator!=(const Fixed& origin);
	Fixed& operator++(void);
	Fixed operator++(int);
	Fixed& operator--(void);
	Fixed operator--(int);
	Fixed operator+(const Fixed& f);
	Fixed operator-(const Fixed& f);
	Fixed operator*(const Fixed& f);
	Fixed operator/(const Fixed& f);
	~Fixed(void);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;

	static Fixed& min(Fixed& a, Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& val);

#endif
