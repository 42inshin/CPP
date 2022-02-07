/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 03:11:17 by inshin            #+#    #+#             */
/*   Updated: 2022/02/08 05:33:53 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat humanA("A", 1);
	Bureaucrat humanB("B", 100);

	std::cout << humanA << std::endl;
	std::cout << humanB << std::endl;

	Form file1("file1", 1, 1);
	Form file2("file2", 42, 50);

	std::cout << file1 << std::endl;
	std::cout << file2 << std::endl;


	humanA.signForm(file1);
	humanB.signForm(file2);

	std::cout << file1 << std::endl;
	std::cout << file2 << std::endl;

	return 0;
}
