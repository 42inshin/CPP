/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 03:11:17 by inshin            #+#    #+#             */
/*   Updated: 2022/02/08 03:50:27 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	// range(1 ~ 150) 미만 또는 초과
	try
	{
		Bureaucrat humanA("A", 0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat humanC("C", 151);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Bureaucrat humanB("B", 1);
		std::cout << humanB << std::endl;
		humanB.incrementGrade(1); // catch로 넘어가면서 아래 코드 실행 안됨
		std::cout << humanB << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Bureaucrat humanD("D", 150);
		std::cout << humanD << std::endl;
		humanD.decrementGrade(1);
		std::cout << humanD << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
