/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:45:14 by inshin            #+#    #+#             */
/*   Updated: 2022/01/24 19:12:42 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>

class Fixed
{

private:
	int _fixed;
	static const int _bit = 8;

public:
	Fixed(void);
	Fixed(const Fixed& origin);
	Fixed& operator=(const Fixed& origin);
	~Fixed(void);

	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
