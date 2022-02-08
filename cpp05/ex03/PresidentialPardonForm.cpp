/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inshin <inshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 01:02:59 by inshin            #+#    #+#             */
/*   Updated: 2022/02/09 02:07:40 by inshin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getExecuteGrade())
		throw GradeTooLowException();
	if (this->getSign() == false)
		throw FormNotSignException();
	std::cout << "<" << this->getTarget() << "> has been pardoned by Zafod Beeblebrox" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm() : Form()
{
	std::cout << "PresidentialPardonForm Default Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target)
	: Form("PresidentialPardonForm", 25, 5)
{
	setTarget(target);
	std::cout << "PresidentialPardonForm Named Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy)
{
	std::cout << "PresidentialPardonForm Copy Constructor" << std::endl;
	*this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
	Form::operator=(copy);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "~PresidentialPardonForm" << std::endl;
}
