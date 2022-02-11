/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 21:02:47 by inshin            #+#    #+#             */
/*   Updated: 2022/02/12 05:38:14 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_H__
#define __SPAN_H__

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib> // rand, srand
#include <ctime> // time
#include <iomanip> // setw

class Span
{
private:
	std::vector<int> c;
	int	len;
	int	cnt;

	Span();

public:
	void addNumber(int n);
	void addRandomNumbers(int n);
	int shortestSpan();
	int longestSpan();

	Span(unsigned int n);
	Span(const Span& ref);
	Span& operator=(const Span& ref);
	~Span();

	class SaveFailedException : public std::exception
	{
	public:
		const char *what() const throw();
	};

	class LackOfNumberException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

#endif
