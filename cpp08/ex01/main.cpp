/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 21:01:05 by inshin            #+#    #+#             */
/*   Updated: 2022/02/12 05:07:13 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

void print(Span sp)
{
	std::vector<int>::iterator it = sp.getC().begin();
	int i = 0;
	while (it != sp.getC().end())
	{
		std::cout << "[" << std::setw(5) << i++ << "]" << std::setw(11) << *it++ << "  ";
		if (i % 5 == 0)
			std::cout << std::endl;
	}
	std::cout << std::endl;
}

int main()
{
	try
	{
		Span sp = Span(5); // 10000 test
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		// sp.addRandomNumbers(95);
		print(sp);

		std::cout << "min span: " << sp.shortestSpan() << std::endl;
		std::cout << "max span: "<< sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
