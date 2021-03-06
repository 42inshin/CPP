/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 21:23:01 by inshin            #+#    #+#             */
/*   Updated: 2022/02/12 05:42:52 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

void Span::addNumber(int n)
{
	if (cnt < len)
		c.push_back(n);
	else
		throw SaveFailedException();
	cnt++;
}

void Span::addRandomNumbers(int n)
{
	if (n < 1 || (n + cnt > len))
		throw SaveFailedException();
	srand(static_cast<unsigned int>(time(NULL)));
	for (int i = 0; i < n; i++)
		c.push_back(rand());
	cnt += n;
}

int Span::shortestSpan()
{
	if (cnt < 2)
		throw LackOfNumberException();
	std::vector<int> temp = c;
	std::sort(temp.begin(), temp.end());
	int min_span = temp[1] - temp[0];
	for (int i = 0; i < cnt - 1; i++)
			min_span = std::min(temp[i + 1] - temp[i], min_span);
	return min_span;
}

int Span::longestSpan()
{
	if (cnt < 2)
		throw LackOfNumberException();
	std::vector<int>::iterator min_it = std::min_element(c.begin(), c.end());
	std::vector<int>::iterator max_it = std::max_element(c.begin(), c.end());
	return *max_it - *min_it;
}

std::vector<int>& Span::getC()
{
	return c;
}

Span::Span() {}

Span::Span(unsigned int n)
{
	len = static_cast<int>(n);
	cnt = 0;
}

Span::Span(const Span& ref)
{
	this->c = ref.c;
}

Span& Span::operator=(const Span& ref)
{
	this->c = ref.c;
	return *this;
}

Span::~Span() {}

const char* Span::SaveFailedException::what() const throw()
{
	return "Could not save to storage.";
}

const char* Span::LackOfNumberException::what() const throw()
{
	return "There are not enough numbers to span.";
}
