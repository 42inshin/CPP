/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 03:11:17 by inshin            #+#    #+#             */
/*   Updated: 2022/02/09 02:19:02 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat humanA("Hong", 1);
	Bureaucrat humanB("Ahn", 100);

	std::cout << humanA << std::endl;
	std::cout << humanB << std::endl;
	std::cout << std::endl;

	ShrubberyCreationForm nofile("NoSign");
	humanB.executeForm(nofile);
	std::cout << std::endl;

	RobotomyRequestForm cantfile("CantSigned");
	humanB.signForm(cantfile);
	std::cout << std::endl;

	ShrubberyCreationForm file1("Home");
	humanA.signForm(file1);
	humanB.executeForm(file1);
	std::cout << std::endl;

	RobotomyRequestForm file2("Robot");
	humanA.signForm(file2);
	humanB.executeForm(file2);
	humanA.executeForm(file2);
	std::cout << std::endl;

	PresidentialPardonForm file3("President");
	humanA.signForm(file3);
	humanB.executeForm(file3);
	humanA.executeForm(file3);
	std::cout << std::endl;

	return 0;
}
