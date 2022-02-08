/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 00:35:36 by inshin            #+#    #+#             */
/*   Updated: 2022/02/09 02:11:08 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getExecuteGrade())
		throw GradeTooLowException();
	if (this->getSign() == false)
		throw FormNotSignException();

	srand(static_cast<unsigned int>(time(NULL)));
	if (rand() % 2 == 0)
	{
		std::cout << "<" << this->getTarget() << "> has been robotomized successfully" << std::endl;
	}
	else
	{
		std::cout << "<" << this->getTarget() << "> has been robotomized failed" << std::endl;
	}

}

RobotomyRequestForm::RobotomyRequestForm() : Form()
{
	std::cout << "RobotomyRequestForm Default Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
	: Form("RobotomyRequestForm", 72, 45)
{
	setTarget(target);
	std::cout << "RobotomyRequestForm Named Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
{
	std::cout << "RobotomyRequestForm Copy Constructor" << std::endl;
	*this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
	Form::operator=(copy);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "~RobotomyRequestForm" << std::endl;
}

