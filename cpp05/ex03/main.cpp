/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 03:11:17 by inshin            #+#    #+#             */
/*   Updated: 2022/02/09 04:25:25 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void)
{
	Intern someIntern;
	std::cout << std::endl;

	Form* form1 = someIntern.makeForm("shrubbery creation", "tree");
	std::cout << std::endl;
	Form* form2 = someIntern.makeForm("robotomy request", "Bender");
	std::cout << std::endl;
	Form* form3 = someIntern.makeForm("presidential pardon", "moon");
	std::cout << std::endl;
	Form* form4 = someIntern.makeForm("hello world", "coder");
	std::cout << std::endl;

	std::cout << *form1 << std::endl;
	std::cout << *form2 << std::endl;
	std::cout << *form3 << std::endl;
	std::cout << "form4 Address: " << form4 << std::endl;

	std::cout << "==============" << std::endl;
	Bureaucrat humanA("kim", 1);
	Bureaucrat humanB("hong", 100);
	std::cout << std::endl;

	std::cout << humanA << std::endl;
	std::cout << humanB << std::endl;
	std::cout << std::endl;

	humanA.signForm(*form1);
	humanB.executeForm(*form1);
	std::cout << std::endl;

	delete form1;
	delete form2;
	delete form3;
	delete form4; // delete는 해당 포인터가 null일 때, 아무 일도 일어나지 않는다.
	return 0;
}
