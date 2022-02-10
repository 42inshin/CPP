/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:03:19 by inshin            #+#    #+#             */
/*   Updated: 2022/02/10 13:53:09 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONVERT_H__
#define __CONVERT_H__

#include <iostream>
#include <exception>
#include <string>
#include <cstdlib> // strtod or atof : Convert string to double
#include <cctype> // isdigit
#include <climits> // INT_MAX, INT_MIN

class Convert
{
private:
	std::string	str;
	double		value;
	bool		is_nan;
	bool		is_invalid;
	bool		is_inf;

public:
	char toChar() const;
	int toInt() const;
	float toFloat() const;
	double toDouble() const;

	std::string getStr() const;
	double getValue() const;
	bool getIsNan() const;
	bool getIsInf() const;
	bool getIsInvalid() const;

	Convert(const std::string str);
	Convert();
	Convert(const Convert& ref);
	Convert& operator=(const Convert& ref);
	~Convert();

	class NonDisplayableException : public std::exception
	{
	public:
		const char *what() const throw();
	};

	class ImpossibleException : public std::exception
	{
	public:
		const char *what() const throw();
	};

	class NormalException : public std::exception
	{
	private:
		const char *msg;
	public:
		const char *what() const throw();
		NormalException(const char *msg);
	};
};

std::ostream& operator<<(std::ostream& os, const Convert& ref);

#endif
