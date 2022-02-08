/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:35:58 by inshin            #+#    #+#             */
/*   Updated: 2022/02/09 02:12:40 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getExecuteGrade())
		throw GradeTooLowException();
	if (this->getSign() == false)
		throw FormNotSignException();

	std::ofstream of;
	std::string fileName = this->getTarget() + "_shrubbery";
	of.open(fileName.c_str(), std::ofstream::out | std::ofstream::trunc);
	if (of.fail())
		throw FileNotOpenException();
	std::string tree = 	"        _-_\n"
						"    /~~   ~~\\\n"
						" /~~         ~~\\\n"
						"{               }\n"
						" \\  _-     -_  /\n"
						"   ~  \\\\ //  ~\n"
						"_- -   | | _- _\n"
						"  _ -  | |   -_\n"
						"      // \\";
	of << tree << std::endl;
	of.close();
}

ShrubberyCreationForm::ShrubberyCreationForm() : Form()
{
	std::cout << "ShrubberyCreationForm Default Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
	: Form("ShrubberyCreationForm", 145, 137)
{
	setTarget(target);
	std::cout << "ShrubberyCreationForm Named Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
{
	std::cout << "ShrubberyCreationForm Copy Constructor" << std::endl;
	*this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
	Form::operator=(copy);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "~ShrubberyCreationForm" << std::endl;
}
