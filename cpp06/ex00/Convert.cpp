/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:13:51 by inshin            #+#    #+#             */
/*   Updated: 2022/02/10 01:43:14 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

char Convert::toChar() const
{
	if (is_nan || is_inf || is_invalid || value < 0 || value > 255)
		throw ImpossibleException();
	if (value < 32 || value > 126)
		throw NonDisplayableException();
	return static_cast<char>(value);
}

int Convert::toInt() const
{
	if (is_nan || is_inf || is_invalid || (value > INT_MAX || value < INT_MIN))
		throw ImpossibleException();
	return static_cast<int>(value);
}

float Convert::toFloat() const
{
	if (is_invalid)
		throw ImpossibleException();
	if (is_nan)
		throw NormalException("nan");
	if (is_inf)
	{
		if (str == "-inf")
			throw NormalException("-inff");
		throw NormalException("+inff");
	}
	return static_cast<float>(value);
}

double Convert::toDouble() const
{
	if (is_invalid)
		throw ImpossibleException();
	if (is_nan)
		throw NormalException("nan");
	if (is_inf)
	{
		if (str == "-inf")
			throw NormalException("-inf");
		throw NormalException("+inf");
	}
	return static_cast<double>(value);
}

std::string Convert::getStr() const
{
	return str;
}

double Convert::getValue() const
{
	return value;
}

bool Convert::getIsNan() const
{
	return is_nan;
}
bool Convert::getIsInf() const
{
	return is_inf;
}
bool Convert::getIsInvalid() const
{
	return is_invalid;
}

Convert::Convert(const std::string str)
	: str(str), value(0.0), is_nan(false), is_invalid(false), is_inf(false)
{
	if (str == "nan")
		is_nan = true;
	else if (str == "inf" || str == "-inf" || str == "+inf")
		is_inf = true;
	else if (str[0] != '-' && str[0] != '+' && !std::isdigit(static_cast<int>(str[0])))
		is_invalid = true;
	if (!is_invalid)
		value = std::atof(str.c_str());
}

Convert::Convert() : str("") {}

Convert::Convert(const Convert &ref)
{
	*this = ref;
}

Convert &Convert::operator=(const Convert &ref)
{
	str = ref.getStr();
	value = ref.getValue();
	return *this;
}

Convert::~Convert() {}

std::ostream &operator<<(std::ostream &os, const Convert &ref)
{
	if (ref.getIsInvalid())
		return os << "Only the decimal notation will be used" << std::endl;
	os << "char: ";
	try
	{
		char _c = ref.toChar();
		os <<"'" << _c <<"'" << std::endl;
	}
	catch (const std::exception &e)
	{
		os << e.what() << std::endl;
	}

	os << "int: ";
	try
	{
		os << ref.toInt() << std::endl;
	}
	catch (const std::exception &e)
	{
		os << e.what() << std::endl;
	}

	os << "float: ";
	try
	{
		os << ref.toFloat();
		if (ref.getValue() - static_cast<int>(ref.getValue()) == 0.0)
			os << ".0";
		os << 'f' << std::endl;
	}
	catch (const Convert::NormalException &e)
	{
			os << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		os << e.what() << std::endl;
	}

	os << "Double: ";
	try
	{
		os << ref.toDouble();
		if (ref.getValue() - static_cast<int>(ref.getValue()) == 0.0)
			os << ".0";
		os << std::endl;
	}
	catch (const Convert::NormalException &e)
	{
		os << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		os << e.what() << std::endl;
	}

	return os;
}

const char *Convert::NonDisplayableException::what() const throw()
{
	return "Non displayable";
}

const char *Convert::ImpossibleException::what() const throw()
{
	return "impossible";
}

Convert::NormalException::NormalException(const char *msg)
{
	this->msg = msg;
}

const char *Convert::NormalException::what() const throw()
{
	return msg;
}
